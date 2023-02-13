// 递归求二项式系数值.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int func(int n, int k)
{
    if (k == 0 || k == n)return 1;
    return func(n - 1, k) + func(n - 1, k - 1);
}
int main()
{
    int n, k;
    cin >> k >> n;
    cout << func(n, k) << endl;
    return 0;
}
