// 倒序输出一个正整数.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
void output(int n)
{
    if (n)
    {
        cout << n % 10;
        n /= 10;
        output(n);
    }
    else
        cout << endl;
}
int main()
{
    int n;
    cin >> n;
    output(n);
    return 0;
}
