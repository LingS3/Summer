/*逆康托展开就是通过已知全排列排列为第几位来计算该数是多大
  即，已知用于全排列的数和x的位置，计算x的大小*/
#include<stdio.h>
int jei(int n);
int main(void)
{
    int i=1,n,x,j,k=1;
    int a[10],b[10];
    printf("请输入用于全排列的数字(以-1结尾):");//得到用于全排列的数字
    scanf("%d",&n);
    while(n!=-1)
    {
        a[i]=n;
        scanf("%d",&n);
        if(n!=-1)
        i++;
    }/*printf("%d\n",i);
    for(j=1;j<=i;j++)
    {
        printf("%d ",a[j]);
    }
    printf("\n");*/ //通过输出来判断录入是否有问题
    printf("请输入所求数的位置:");//得到x的位置
    scanf("%d",&x);
    x=x-1;
    for(j=1;j<=i;j++)
    {
        b[j]=x/jei(i-j);
        b[j]=b[j]+1;//正常计算x除以阶乘后的商并对它加一
        for(k=1;k<=i;k++)
        {
            if((b[j]==b[k])&&(j!=k))//当它碰到自己的时候会加一，所以要同时满足重复和k!=j的时候才加1
            b[j]+=1;
        }//如果数字和前面的重复就再加上个1 
        if(j==i)//单独为算出最后一位数写的,哪一位数没被用过，没被用过就是最后一位数
        {
            for(k=1;k<=i;k++)
            {
                for(int l=1;l<=i;l++)
                {
                    if(a[k]!=b[l])
                    b[j]=a[l];//把未被使用过的那个数赋值给最后一位数
                    break;//找到那个数并赋值后就可以跳出循环
                }
                break;//跳出循环
            }
        } 
        x=x%jei(i-j);
    }
    printf("所求数为:");
    for(j=1;j<=i;j++)
    {
        printf("%d",b[j]);
    }
    return 0;
}
//阶乘函数
int jei(int n)
{
    int i=1,j=1;
    for(i=1;i<=n;i++)
    {
        j=j*i;
    }
    return j;
}
