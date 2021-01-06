//问题描述
//如果整数 a 是整数 b 的整数倍，则称 b 是 a 的约数。
//请问，有多少个正整数是 2020 的约数。
//答案提交
//这是一道结果填空的题，你只需要算出结果后提交即可。本题的结果为一个整数，在提交答案时只填写这个整数，填写多余的内容将无法得分。

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    while (cin >> n) {//多组输入
        int a[1001];
        int b[1001], t;//b数组用于存放结果，t用来中途计数，这样就不用初始化b数组了
        for (int i = 0; i < n; i++)
        {
            t = 0;//初始化t
            cin >> a[i];
            for (int j = 1; j <= sqrt(a[i]); j++)//遍历
            {
                if (a[i] % j == 0)t++;
            }
            if (int(sqrt(a[i])) * int(sqrt(a[i])) != a[i])b[i] = t * 2;//如果平方根相乘不是本身的话就可以乘以2
            else b[i] = t * 2 - 1;
        }
        for (int i = 0; i < n; i++)
        {
            cout << b[i] << endl;
        }
    }
    return 0;

}