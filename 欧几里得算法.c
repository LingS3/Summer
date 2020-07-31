/*欧几里德算法又称辗转相除法，是指用于计算两个正整数a，b的最大公约数。
计算公式gcd(a,b) = gcd(b,a mod b)。*/
#include<stdio.h>
int main()
{
    int a,b,c,i;
    c=1;
    printf("请输入待求公约数的两个数:");
    scanf("%d %d",&a,&b);
    while(c!=0)
    {
        c=a%b;
        a=b;
        b=c;
    }
    printf("最大公约数为:%d",a);
    return 0;
}
//最开始的除数变被除数，余数变除数，通过判断余数是否为0来输出最大公约数
