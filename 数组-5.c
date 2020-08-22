/*找出数组中第k大的数字出现多少次，
比如数组[1，2，4，4，3，5]第二大的数字是4，出现两次，所以返回2
//示例1
//输入
   [1，2，4，4，3，5]
   2
//输出
   2
*/
//解题思路：
/*首先要对原数组进行排序，
然后利用辅助数组计算每个数字出现了多少次，
最后结合重新排序的数组就可以知道第k大的数字出现了多少次。*/
#include<stdio.h>
int main(void)
{
    int a[100],i=0,j=0,k=0,n,temp;
    printf("请输入数组中的数字，用空格隔开，以回车键结束：");
    do
    {
        scanf("%d",&a[i]);
        i++;
    }while(getchar()!='\n');
    n=i;
    int b[n];
    printf("请输入带查找的第k大的数:");
    scanf("%d",&k);
    for(i=0;i<n-1;i++)
    {
        for(j=i;j<n;j++)
        {
            if((a[j]>a[i])||(a[j]==a[i]))
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    /*for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");判断检查用的*/
    for(i=0;i<n;i++)
    {
        temp=a[i];
        b[temp]=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                b[temp]++;
            }
        }
    }
    /*for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }*/
    temp=a[k];
    printf("第%d大的数(%d)出现了%d次。\n",k,a[k],b[temp]);
    return 0;
}