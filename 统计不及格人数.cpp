// 统计不及格人数.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int tongji(double mark[], int n)
{
    int count = 0;
    while (n--)count += (mark[n] < 60 ? 1 : 0);
    return count;
}
int main()
{
    double mark[40];
    int m, n, count;
    cin >> n;
    for (m = 0; m < n; m++)
    {
        cin >> mark[m];
    }
    cout << tongji(mark, n)<<endl;
    return 0;
}