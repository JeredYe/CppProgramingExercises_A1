// 冰雹数.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int main()
{
    int n,max=0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int a = i;
        while (a > 1)
        {
            a = (!(a % 2) ? a / 2 : a * 3 + 1);
            max = (a > max ? a : max);
        }
    }
    cout << max << endl;
    return 0;
}

