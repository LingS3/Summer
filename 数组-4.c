/*来源：牛客网
在一个长度为n的数组里的所有数字都在0到n-1的范围内。 
数组中某些数字是重复的，但不知道有几个数字是重复的。
也不知道每个数字重复几次。请找出数组中任意一个重复的数字。 
例如，如果输入长度为7的数组{2,3,1,0,2,5,3}，那么对应的输出是第一个重复的数字2。
*/
//我想的比较简单，就直接输出第一个就可以了，没管随意输出的问题
#include<stdio.h>
int main(void)
{
    int n,i=0,j,count=0;
    int a[100];
    printf("请输入数组中的数字，以空格隔开，回车键结束：");
    do
    {
        scanf("%d",&a[i]);
        i++;
    } while (getchar()!='\n');
    n=i;
    printf("%d\n",n);
    for(j=0;j<n;j++)
    {
        count=0;
        for(i=j+1;i<n;i++)
        {
            if(a[j]==a[i])
            {
                printf("%d\n",a[j]);
                count++;
            }
        }
        if(count!=0)
        break;
    }
    return 0;

    
}
