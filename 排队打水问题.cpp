// 排队打水问题.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n, r;
    cin >> n >> r;
    int Ti[1000] = { 0 };
    for (int i = 0; i < n; i++)cin >> Ti[i];
    sort(Ti, Ti+n);
    int Groups[80][600] = { 0 }, GroupT[80] = { 0 };
    int t = 0;
    for (int i = 0; i < n; i++)
    {
        Groups[t % r][GroupT[t % r]++] = Ti[i];
        t++;
    }
    int sum = 0;
    for (int i = 0; i < r; i++)
    {
        int t = 0;
        for (int j = 0; j < GroupT[i]; j++)
        {
            t += Groups[i][j];
            sum += t;
        }
    }
    cout << sum << endl;
    return 0;
}
