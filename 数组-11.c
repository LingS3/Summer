/*
给定两个整数，被除数?dividend?和除数?divisor。将两数相除，要求不使用乘法、除法和 mod 运算符。

返回被除数?dividend?除以除数?divisor?得到的商。

整数除法的结果应当截去（truncate）其小数部分，例如：truncate(8.345) = 8 以及 truncate(-2.7335) = -2

?

示例?1:

输入: dividend = 10, divisor = 3
输出: 3
解释: 10/3 = truncate(3.33333..) = truncate(3) = 3
示例?2:

输入: dividend = 7, divisor = -3
输出: -2
解释: 7/-3 = truncate(-2.33333..) = -2
?

提示：

被除数和除数均为 32 位有符号整数。
除数不为?0。
假设我们的环境只能存储 32 位有符号整数，其数值范围是 [?231,? 231?? 1]。本题中，如果除法结果溢出，则返回 231?? 1。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/divide-two-integers
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处*/

//解题思路：
/*暴力解法：因为题目说明不能使用乘法，除法和除于符号，
所以我的想法是利用加法或者减法结合循环来得出商的整数部分

其他解法：也可以利用泰勒公式，
*/
#include<stdio.h>
int main(void)
{
    int m,n,i=0,answer,j,k;
    printf("请输入除数和被除数(被除数不能为0):");
    scanf("%d %d",&m,&n);
    j=n;
    k=m;
    if(m== -2147483648 && n== -1 )
    {
        answer=2147483648;
    }//除了标准的代码写法，还可以钻空子，把特殊情况单独拿出来计算
    
    else
    {
    if(n>0)
    j=-n;
    if(m>0)//取除数和被除数的绝对值
    k=-m;
    while(k<j+1)
    {
        k=k-j;
        i++;
    }
    if((m>0)&&(n>0))
    {
        answer=i;
    }
    else if((m<0)&&(n<0))
    {
        answer=i;
    }
    else
    {
        answer=-i;
    }
    }
    printf("%d\n",answer);
    return 0;    
}
/*第一次提交：会越界从而导致出错
10 / 989 个通过测试用例
状态：执行出错
提交时间：4 分钟前
执行出错信息：
Line 8: Char 6: runtime error: negation of -2147483648 cannot be represented in type 'int'; cast to an unsigned type to negate this value to itself (solution.c)
最后执行的输入：
-2147483648 -1
正常的输入输出不存在问题，但如果用极端值会出现问题，可以增大除数的值来减少运行减法的次数,
除此之外还可以利用位移，由于未使用位移就不用位移的方法
*/