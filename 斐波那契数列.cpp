// 斐波那契数列.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int func(int num, int* count)
{
    *count = *count + 1;
    if (num <= 1)
        return num;
    else
        return func(num - 1, count) + func(num - 2, count);
}
int main()
{
    int n, p = 0;
    cin >> n;
    cout << func(n, &p);
    cout<< " " << p << endl;
    return 0;
}
