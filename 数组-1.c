/*���ӣ�https://www.nowcoder.com/questionTerminal/3d2a2b4593284843a5ec2b66152b0648
��Դ��ţ����

����˻�
���룺һ������Ϊn����������input
�����һ������Ϊn����������result������result[i] = input�����г���input[i]֮���������ĳ˻������費���������
�������룺input = {2,3,4,5}�����result = {60,40,30,24}
����ʱ��Ϳռ临�Ӷ�ԽСԽ�á�

C/C++��
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
    printf("����������ĳ���:");
    scanf("%d",&n);
    printf("������%d������:",n);
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
    printf("}\n");��һ�β�֪��Ϊʲô������������������ص���ָ�뵫�������Ļ��ǻ����*/
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
        *(result+i)/=p[i];//������������뵽�ķ��������ܳ˳��Ե�iλ��
    }
    printf("result={");
    for(i=1;i<=n;i++)
    {
        printf("%d,",*(result+i));
    }
    printf("}\n");
    return result;
}
/*�ڶ���
for(i=1;i<=n;i++)
    {
        *(result+i)=1;
        for(j=1;j<=n;j++)
        {
            if(j==i)
            *(result+i)*=1;//��ѭ����i��ʱ��ͳ���1������������i
            else
            *(result+i)*=p[j];
        }
    }
*/