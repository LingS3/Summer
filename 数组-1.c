/*链接：https://www.nowcoder.com/questionTerminal/3d2a2b4593284843a5ec2b66152b0648
来源：牛客网

数组乘积
输入：一个长度为n的整数数组input
输出：一个长度为n的整数数组result，满足result[i] = input数组中除了input[i]之外所有数的乘积（假设不会溢出）。
比如输入：input = {2,3,4,5}，输出result = {60,40,30,24}
程序时间和空间复杂度越小越好。

C/C++：
int *cal(int* input , int n);
Java:
int[] cal(int[] input);
*/

#include<stdio.h>
#include<stdlib.h>
int *cal(int* input , int n);
int main(void)
{
    int n,i=1;
    int input[n];
    int *result=NULL;
    printf("请输入数组的长度:");
    scanf("%d",&n);
    printf("请输入%d个数字:",n);
    while(i<=n)
    {
        scanf("%d",&input[i]);
        i++;
    }
    result=cal(input,n);
    /*printf("result={");
    for(i=1;i<=n;i++)
    {
        printf("%d,",*(result+i));
    }
    printf("}\n");这一段不知道为什么会乱码输出，明明返回的是指针但最后输出的还是会错误*/
    return 0;
}
int *cal(int* input , int n)
{
    int *p,*result;
    int i,j,r[n];
    p=input;
    result=r;
    for(i=1;i<=n;i++)
    {
        *(result+i)=1;
        for(j=1;j<=n;j++)
        {
            *(result+i)*=p[j];
        }
        *(result+i)/=p[i];//这个是最容易想到的方法，用总乘除以第i位数
    }
    printf("result={");
    for(i=1;i<=n;i++)
    {
        printf("%d,",*(result+i));
    }
    printf("}\n");
    return result;
}
/*第二种
for(i=1;i<=n;i++)
    {
        *(result+i)=1;
        for(j=1;j<=n;j++)
        {
            if(j==i)
            *(result+i)*=1;//当循环到i的时候就乘以1，来跳过乘以i
            else
            *(result+i)*=p[j];
        }
    }
*/