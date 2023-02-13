// 求完数.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i < 10000; i++)
    {
        int sum = 0;
        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)sum += j;
        }
        if (sum == i)cout << sum << endl;
    }
    return 0;
}
