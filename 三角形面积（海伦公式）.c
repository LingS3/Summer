/*���׹�ʽ:
������ƽ���ڣ���һ�������Σ��߳��ֱ�Ϊa��b��c�������ε����S�������¹�ʽ��ã�
s=p(p-a)(p-b)(p-c)��ƽ������
����ʽ���pΪ���ܳ����ܳ���һ�룩��p=(a+b+c)/2;
*/
#include<stdio.h>
#include<math.h>
int main(void)
{
    int a,b,c,p;
    double s;
    printf("�����������εı߳���");
    scanf("%d %d %d",&a,&b,&c);
    if((a+b<c)||(a-b)>c)
    {
        printf("���������⣬���������룡\n");
        return 0;
    }
    p=(a+b+c)/2;
    s=p*(p-a)*(p-b)*(p-c);
    s=pow(s,0.5);
    printf("��%d,%d,%dΪ�߳��������ε����Ϊ%.2lf",a,b,c,s);
}