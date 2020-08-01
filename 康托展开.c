/*康托展开是一个全排列到一个自然数的双射，常用于构建哈希表时的空间压缩。
康托展开的实质是计算当前排列在所有由小到大全排列中的顺序，因此是可逆的。
即计算目前这个数在所有的排列数中的位置*/
#include<stdio.h>
int jei(int n);
int main(void)
{
    int x,i=0,j,k=0,n=0,count=0,y,z;
    int a[10];
    printf("输入待计算的数x=");
    scanf("%d",&x);
    y=z=x;//经过计算x为几位数和x每一位数上的数字后x,y都会变为0，所以要多次赋值，多次利用
    while(x!=0)//判断它是几位数
    {
        x=x/10;
        i++;//i就是几位数
    }
    for(j=i;j>=1;j--)
    {
        a[j]=y%10;//计算出每一位上的数字
        y=y/10;
    }
    for(k=1;k<=i;k++)
    {
        count=0;//注意:变量要重新赋值为0
        for(j=k;j<=i;j++)
        {
            if(a[j]<a[k])
            {
                count++;
            }
        }/*康托展开的关键，比当前位要小且未被使用的数的个数，
          是要用当前位和后面的比大小才能得到count*/
        n+=count*jei(i-k);  
    }   
    printf("%d是第%d位数\n",z,n+1);
    return 0;
}
int jei(int n)//计算阶乘的自定义函数
{
    int i=1,sum=1;
    for(i=1;i<=n;i++)
    {
        sum=sum*i;
    }
    return sum;
}