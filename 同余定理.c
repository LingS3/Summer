/*数论中的重要概念。给定一个正整数m，如果两个整数a和b满足a-b能够被m整除，
即（a-b)/m得到一个整数，那么就称整数a与b对模m同余，记作a≡b(mod m)。
同余即，a和b除以m都得到相同的余数
*/
#include<stdio.h>
int main(void)
{
    int a,b,m,c;
    printf("please input the number m:");
    scanf("%d",&m);
    printf("please input the number a and b:");
    scanf("%d %d",&a,&b);
    c=a-b;
    if(c%m==0)//余数为0，同余
    {
        printf("(a-b)/m=%d\n",c/m);
        printf("(a-b)/m所得值为整数，a与b对模m同余。\n");
    }
    else//余数不为零，不同余
    printf("(a-b)/m所得值不为整数，a与b对模m不同余。");
    return 0;
}