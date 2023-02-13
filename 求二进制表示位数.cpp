// 求二进制表示位数.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int pow(int a,int b)
{
    int result = 1;
    for (int i = 0; i < b; i++)result *= a;
    return result;
}
int main()
{
    unsigned int n;
    cin >> n;
    int i = 1;
    for (; i < 32; i++)if (pow(2, i) >= n)break;
    cout << i << endl;
    return 0;
}
