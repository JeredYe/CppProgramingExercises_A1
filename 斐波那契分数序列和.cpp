// 斐波那契分数序列和.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int up = 2, down = 1;
    long double sum = 0;
    int n;
    while (cin >> n)
    {
        up = 2, down = 1,sum=0;
        for (int i = 0; i < n; i++)
        {
            sum += (long double)up / down;
            int tmpup = up;
            up = up + down;
            down = tmpup;
        }
        cout << fixed<<setprecision(6)<<sum << endl;
    }
    return 0;
}