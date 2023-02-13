// 青蛙跳台阶.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int func(int a)
{
    if (a <= 2)return a;
    else
    {
        return func(a - 1) + func(a - 2);
    }
}
int main()
{
    int n;
    cin >> n;
    cout << func(n) << endl;
    return 0;
}
