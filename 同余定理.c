/*�����е���Ҫ�������һ��������m�������������a��b����a-b�ܹ���m������
����a-b)/m�õ�һ����������ô�ͳ�����a��b��ģmͬ�࣬����a��b(mod m)��
ͬ�༴��a��b����m���õ���ͬ������
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
    if(c%m==0)//����Ϊ0��ͬ��
    {
        printf("(a-b)/m=%d\n",c/m);
        printf("(a-b)/m����ֵΪ������a��b��ģmͬ�ࡣ\n");
    }
    else//������Ϊ�㣬��ͬ��
    printf("(a-b)/m����ֵ��Ϊ������a��b��ģm��ͬ�ࡣ");
    return 0;
}