/*���ӣ�https://www.nowcoder.com/questionTerminal/8cc4f31432724b1f88201f7b721aa391?orderByHotValue=1&mutiTagIds=578&page=1&onlyReference=false
��Դ��ţ����

����һ����������arr���ҵ�������δ���ֵ���С������
����arr = [-1, 2, 3, 4]������1
arr = [1, 2, 3, 4]������5

//ʾ��1
//����
   [-1,2,3,4]
//���
   1
*/
//����˼·:
/*�������飬����Ҫ������������򣨴�С����
��Σ�����������С���Ǹ��������жϣ����С��0��ֱ����δ���ֵ���С������Ϊ1
�����Ŀǰ��С�����ͺ���������бȽϣ�����ظ��˾�+1��Ȼ���ٺͺ���Ľ��бȽ�
��֤��С��δ���ֹ�����������˾ͼ�1*/
#include<stdio.h>
int main(void)
{
   int a[100],i=0,j=0,k=0,temp,min;
   printf("���������������е����֣��ÿո���������м���β��");
   do
   {
      scanf("%d",&a[i]);
      i++;
   } while (getchar()!='\n');
   //������
   for(k=0;k<(i-1);k++)
   {
      for(j=k;j<i;j++)
      {
         if(a[k]>a[j])
         {
            temp=a[k];
            a[k]=a[j];
            a[j]=temp;
         }
      }
   } 
   min=a[0];
   for(j=0;j<i;j++)
   {
      if(min<0)
      {
         min=1;
      }
      if(min==a[j])
      min++;
   }
   printf("������δ���ֵ���С������Ϊ%d\n",min);
   return 0;
}