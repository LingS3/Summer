/*链接：https://www.nowcoder.com/questionTerminal/e8a1b01a2df14cb2b228b30ee6a92163
来源：牛客网

数组中有一个数字出现的次数超过数组长度的一半，请找出这个数字。
例如输入一个长度为9的数组{1,2,3,2,2,2,5,4,2}。
由于数字2在数组中出现了5次，超过数组长度的一半，因此输出2。如果不存在则输出0。
*/
//解题思路
/*首先是要在输入的时候知道数组的长度
利用循环，当a[1]==a[i]时，b[1]从零开始+1，
当b[i]>数组长度的一半时就输出i;
若不存在就输出0。*/
#include<stdio.h>
#define N 100
int main(void)
{
    int n,i=0,j=0,k,l;
    printf("请输入数组的长度：");
    scanf("%d",&n);
    int a[n],b[n];
    b[n]=0;
    printf("请输入%d个数字，中间用空格隔开，用回车键结束:\n",n);
	   do{
		   scanf("%d",&a[i]);
           i++;
	   }while(getchar()!='\n');
       n=i;//不知道为什么n会变成4，然后影响后面的结果，所以在这里重新赋值
    /*for(k=0;k<n;k++)
    {
        printf("%d ",a[k]);
    }*/
    for(k=0;k<n;k++)
    {
        l=a[k];
        for(j=0;j<n;j++)
        {
            if(l==a[j])
            b[l]++;
        }
    }
    for(k=0;k<n;k++)//虽然我想的时所有数字都可以，但很容易导致最后的结果为0，所以就只循环到n
    {
        if(b[k]>(n/2))
        {
            printf("%d\n",k);
            break;
        }
        if(k==(n-1))
        printf("0\n");
    }
    return 0;
}