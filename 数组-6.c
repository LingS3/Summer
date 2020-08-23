/*链接：https://www.nowcoder.com/questionTerminal/8cc4f31432724b1f88201f7b721aa391?orderByHotValue=1&mutiTagIds=578&page=1&onlyReference=false
来源：牛客网

给定一个无序数组arr，找到数组中未出现的最小正整数
例如arr = [-1, 2, 3, 4]。返回1
arr = [1, 2, 3, 4]。返回5

//示例1
//输入
   [-1,2,3,4]
//输出
   1
*/
//解题思路:
/*无序数组，首先要对数组进行排序（从小到大）
其次，对于数组最小的那个数进行判断，如果小于0，直接令未出现的最小正整数为1
最后，用目前最小的数和后面的数进行比较，如果重复了就+1，然后再和后面的进行比较
保证最小数未出现过，如果出现了就加1*/
#include<stdio.h>
int main(void)
{
   int a[100],i=0,j=0,k=0,temp,min;
   printf("请输入无序数组中的数字，用空格隔开，换行键结尾：");
   do
   {
      scanf("%d",&a[i]);
      i++;
   } while (getchar()!='\n');
   //先排序
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
   printf("数组中未出现的最小正整数为%d\n",min);
   return 0;
}