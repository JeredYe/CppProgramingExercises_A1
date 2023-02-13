// 二维数组求各行均值.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int main()
{
    double sum[3] = { 0 }, add;
    for (int i = 0; i < 3; i++)
    {
        
        for (int j = 0; j < 4; j++)
        {
            cin >> add;
            sum[i] += add;
        }
    }
    for (int i = 0; i < 3; i++)cout << sum[i] / 4 << " ";
    cout << endl;
    return 0;
}
