/*海伦公式:
假设在平面内，有一个三角形，边长分别为a、b、c，三角形的面积S可由以下公式求得：
s=p(p-a)(p-b)(p-c)的平方根，
而公式里的p为半周长（周长的一半）：p=(a+b+c)/2;
*/
#include<stdio.h>
#include<math.h>
int main(void)
{
    int a,b,c,p;
    double s;
    printf("请输入三角形的边长：");
    scanf("%d %d %d",&a,&b,&c);
    if((a+b<c)||(a-b)>c)
    {
        printf("输入有问题，请重新输入！\n");
        return 0;
    }
    p=(a+b+c)/2;
    s=p*(p-a)*(p-b)*(p-c);
    s=pow(s,0.5);
    printf("以%d,%d,%d为边长的三角形的面积为%.2lf",a,b,c,s);
}