/*
利用0和1，非0则输出。原数组储存数都为1，然后余数为0的就重新赋值为0；
最后输出的时候利用for循环，和if判断，所赋值为1就输出。
*/
#include<stdio.h>
#include<stdlib.h>
#define N 100
int main(void)
{
    int i,j;
    int a[N];
    for(i=2;i<=N;i++)//1不是素数，直接从2开始
    {
       a[i]=1;//初始赋值都为1
    }
    for(i=2;i*i<=N;i++)
    { 
        if(a[i]==1)
        {
           for(j=i+1;j<=N;j++)//j的初始值不能为i，为i的话会漏掉2，3，5，7
           {
               if(j%i==0)//判断余数是否为0，为0则不是素数，重新赋值
               a[j]=0;
           }
        }     
     }
     for(i=2;i<=N;i++) 
     {
        if(a[i]==1)//判断所赋值是否仍为1，为1则是素数，则输出 
        {
           printf("%d ",i);
        }
     }
    return 0;
} //此代码仅可计算前一百的