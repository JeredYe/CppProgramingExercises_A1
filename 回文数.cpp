// 回文数.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int back(int num)
{
    int x = 0;
    while (num)
    {
        x = x * 10 + num % 10;
        num /= 10;
    }
    return x;
}
bool isBack(int num)
{
    return num == back(num);
}
void Calc(int num)
{
    int n = num + back(num);
    cout << num << "+" << back(num) << "=" << n << endl;
    if (!isBack(n))Calc(n);
}
int main()
{
    int n;
    while (cin >> n)
    {
        if (!n)break;
        Calc(n);
    }
    return 0;
}
