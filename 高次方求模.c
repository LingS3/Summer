/*�ߴη���ģ:
��a��b�η���cȡ��������(a^b)%c,
*/
//��<1>
//ȱ��:��a����b����ʱ�����׻����
/*��ͨ�㷨������pow����
#include<stdio.h>
#include<math.h>
int main(void)
{
    int a,b,c,result;
    printf("������������a,b,c:");
    scanf("%d %d %d",&a,&b,&c);
    result=pow(a,b);
    result%=c;
    printf("%d��%d�η���%dȡ������ֵΪ:%d\n",a,b,c,result);
    return 0;
}
*/
//��<2>
/*���ö��ַ�
ȱ�㣺����ֱ�ӣ��ᳬʱ
���ַ�:ͨ����Сb�η���������a,�������a��b�η��Ľ��
#include<stdio.h>
int main(void)
{
    int a,b,c,i=1,j,result,k;
    printf("������������a,b,c:");
    scanf("%d %d %d",&a,&b,&c);
    j=a;
    k=b;
    while(b!=0)
    {
        if(b%2!=0)//
          i*=j;//���b�η����ܳ���2����a���ܿ�ƽ��������1�Ļ������ٳ���һ��a
        j*=j;//���b�η��ܹ�����2����a��ƽ��������a�Ļ������ٳ�һ��a
        b=b/2;//Ȼ���b����2
    }//i����a��b�η��Ľ������ͬ�ڷ�1ֱ�ӵĳ��������2��һ��һ���������
    result=i%c;
    printf("%d��%d�η���%dȡ������ֵΪ:%d\n",a,k,c,result);
    return 0;
}
*/
//��<3>
//������ȡģ�㷨:(a^b)%c=[(a%c)^b]%c
//ȱ�㣺ʱ�����׳�ʱ
/*#include<stdio.h>
int main(void)
{
    int a,b,c,result=1,k;
    printf("������������a,b,c:");
    scanf("%d %d %d",&a,&b,&c);
    k=b;
	a = a % c;               //������һ�� 
	while(b--) 
    { 
		result*=a;            //Ϊ��ʹrÿ�ε���ֵ��С����֤���ݴ�С�Ŀ����ԣ�������Ը�Ϊ  r=(r*a)%c;
	}
    result%=c;
    printf("%d��%d�η���%dȡ������ֵΪ:%d\n",a,k,c,result);
    return 0;
}
*/
//���գ��������㷨���ͷ�3��ͬ���ǣ���4��b�����˶��ַ��Ĳ������Ƿ�3�ͷ�2�Ľ��
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	long long a,b,c,r=1,i,j;//Ӧ����long����int,int������
    printf("������������a,b,c:");
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
    //r%=c;���ܷ������%c,��Ϊ����100������ż����a^b�Ľ����a������r
    printf("%d��%d�η���%dȡ������ֵΪ:%d\n",i,j,c,r);
	return 0;
}

