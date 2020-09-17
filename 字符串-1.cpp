/*链接：https://www.nowcoder.com/questionTerminal/80b6bb8797644c83bc50ac761b72981c
来源：牛客网

字符串旋转:
给定两字符串A和B，如果能将A从中间某个位置分割为左右两部分字符串（都不为空串），并将左边的字符串移动到右边字符串后面组成新的字符串可以变为字符串B时返回true。
例如：如果A=‘youzan’，B=‘zanyou’，A按‘you’‘zan’切割换位后得到‘zanyou’和B相同返回true。
示例1
输入
"youzan","zanyou"
输出
true
示例2
输入
"youzan","zyouan"
输出
false
*/
 
/*
{
    /**
     * 旋转字符串
     * @param A string字符串
     * @param B string字符串
     * @return bool布尔型
     */
    //public boolean solve (String A, String B) {
        //特殊情况处理
        //if(A==null||B==null||A.length()<2||B.length()<2||A.length()!=B.length()){
        //    return false;
        //}
        //return (A+A).contains(B);
    //}
//}

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string A,B,C;
    int alen,blen,i,j,flag,k;
    cin>>A;
    cin>>B;
    alen=A.length();
    blen=B.length();
    if(alen!=blen)//长度不同就直接输出错误
    {
        printf("false\n");
        return false;
    }
    C=A+A;//原字符串相加得C
    for(i=0;i<C.length()-blen;i++)//外层循环，窗口要滑动多少次
    {
        k=0;
        flag=0;
        for(j=i;j<blen+i;j++)//窗口的长度固定为blen
        {
            if(C[j]==B[k])
            {
                flag++;
                k++;
            }
            else
            {
                break;
            }
        }
        if(flag==blen)
        {
            cout<<"true";
            break;
        }
    }
    if(flag!=blen)
    {
        cout<<"false";
    }
}