/*链接：https://www.nowcoder.com/questionTerminal/abc3fe2ce8e146608e868a70efebf62e
来源：牛客网

在一个二维数组中（每个一维数组的长度相同），
每一行都按照从左到右递增的顺序排序，每一列都按照从上到下递增的顺序排序。
请完成一个函数，输入这样的一个二维数组和一个整数，判断数组中是否含有该整数。*/
//解题思路：
/*
1>可以直接从头到尾的查找
2>也可以利用递增来更简单的查找*/
#include<stdio.h>
#define N 100
int main(void)
{
    int i,j,k,n;
    int a[2][N];
    printf("请输入数组中的数字用空格隔开，换行键结尾：");
    do
    {
        scanf("%d",&k);
        j++;
    }while(getchar()!='\n');
    n=j/2;
    for(i=0;i<2;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<n;j++)
        {
            if(n==a[i][j])
            printf("该数组中含有改整数。\n");
        }
    }
    return 0;
}