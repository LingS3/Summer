 /*给定一个长度为偶数的数组arr，将该数组中的数字两两配对并求和，
 在这些和中选出最大和最小值，请问该如何两两配对，才能让最大值和最小值的差值最小？*/
 //解题思路
 /*要认识到，和的最大值应该是最大值和次大值之和，和的最小值应该是最小值和次小值之和时
 最大值和最小值的差最小*/
 #include<stdio.h>
 #define N 100
 int main(void)
 {
    int i=0,a[N],j=0,k,n,max,min,temp;
    printf("请输入数组中的数字用空格隔开，换行键结尾：");
    do
    {
        scanf("%d",&a[i]);
        i++;
    }while(getchar()!='\n');
    n=i;
    for(i=0;i<n-1;i++)
    {
        for(j=i;j<n;j++)
        {
            if(a[j]>a[i])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    max=a[0]+a[1];
    min=a[n-1]+a[n-2];
    temp=max-min;
    printf("和的最大值与和的最小值的差最大为：%d\n",temp);
    return 0;
 }