// 卖鸭子.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int main()
{
    int n,val=2;
    while (cin >> n)
    {
        val = 2;
        for (int i = 0; i < 7 - n; i++)
        {
            val++;
            val *= 2;
        }
        cout <<val+2 << " " << val<<endl;
    }

    return 0;
}

