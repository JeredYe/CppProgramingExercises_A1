// 递归函数FAC.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
unsigned long long FAC(int num)
{
    return (num ? num*FAC(num-1) : 1);
}
int main()
{
    unsigned long long n;
    while (cin >> n)cout << FAC(n) << endl;
    return 0;
}
