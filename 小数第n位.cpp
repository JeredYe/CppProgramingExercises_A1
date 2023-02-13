// 小数第n位.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int main()
{
    double a, b;
    int n, i = 0;
    cin >> a >> b >> n;
    bool below;
    while (true)
    {
        below = (a < b ? 1 : 0);
        if(below)i++;
        a *= (a<b?10:1);
        int times = 0;
        while (a >= b*times)times++;
        times--;
        a -= times * b;
        if (i >= n && i<n+3)
            cout << times;
        if (i - n >2)break;
    }
    cout << endl;
    return 0;
}

