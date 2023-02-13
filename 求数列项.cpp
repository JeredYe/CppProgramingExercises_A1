// 求数列项.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int main()
{
    int n;
    int Array[50] = { 0 };
    Array[0] = 1;
    Array[1] = 5;
    for (int i = 2; i < 50; i++)
    {
        Array[i] = Array[i - 1]+((i+1) - 3) * 3 + 7;
    }
    while (cin >> n)
    {
        cout << Array[n -1] << endl;
    }
    return 0;
}