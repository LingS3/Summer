/*高次方求模:
求a的b次方对c取余数，即(a^b)%c,
*/
//法<1>
//缺点:当a或者b过大时很容易会溢出
/*普通算法，利用pow函数
#include<stdio.h>
#include<math.h>
int main(void)
{
    int a,b,c,result;
    printf("请输入待计算的a,b,c:");
    scanf("%d %d %d",&a,&b,&c);
    result=pow(a,b);
    result%=c;
    printf("%d的%d次方对%d取余数的值为:%d\n",a,b,c,result);
    return 0;
}
*/
//法<2>
/*利用二分法
缺点：不够直接，会超时
二分法:通过减小b次方来逐渐增大a,来计算出a的b次方的结果
#include<stdio.h>
int main(void)
{
    int a,b,c,i=1,j,result,k;
    printf("请输入待计算的a,b,c:");
    scanf("%d %d %d",&a,&b,&c);
    j=a;
    k=b;
    while(b!=0)
    {
        if(b%2!=0)//
          i*=j;//如果b次方不能除以2，即a不能开平方，就在1的基础上再乘以一个a
        j*=j;//如果b次方能够除以2，即a开平方，就在a的基础上再乘一个a
        b=b/2;//然后把b除以2
    }//i就是a的b次方的结果，不同于法1直接的出结果，法2是一步一步来计算的
    result=i%c;
    printf("%d的%d次方对%d取余数的值为:%d\n",a,k,c,result);
    return 0;
}
*/
//法<3>
//快速幂取模算法:(a^b)%c=[(a%c)^b]%c
//缺点：时间上易超时
/*#include<stdio.h>
int main(void)
{
    int a,b,c,result=1,k;
    printf("请输入待计算的a,b,c:");
    scanf("%d %d %d",&a,&b,&c);
    k=b;
	a = a % c;               //加上这一句 
	while(b--) 
    { 
		result*=a;            //为了使r每次的数值更小，保证数据大小的可行性，这里可以改为  r=(r*a)%c;
	}
    result%=c;
    printf("%d的%d次方对%d取余数的值为:%d\n",a,k,c,result);
    return 0;
}
*/
//最终：快速幂算法，和法3不同的是，法4对b利用了二分法的操作，是法3和法2的结合
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	long long a,b,c,r=1,i,j;//应该用long而非int,int不够长
    printf("请输入待计算的a,b,c:");
	scanf("%lld %lld %lld",&a,&b,&c);
    i=a;j=b;
	a=a%c;
	while(b>0)
    {
		if(b%2!=0)
			r=(r*a)%c;
		a=(a*a)%c;
        b=b/2;
	}
    //r%=c;不能放在最后%c,因为例如100这样的偶数，a^b的结果在a而不在r
    printf("%d的%d次方对%d取余数的值为:%d\n",i,j,c,r);
	return 0;
}

