// 特殊四位数.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int main()
{
    int n;
    while (cin >> n)
    {
        int count = 0;
        for (int i = 32; i < 100; i++)
        {
            int num = i * i,l=0,r=1;
            l += num / 1000;
            num %= 1000;
            r *= num / 100;
            num %= 100;
            l += num / 10;
            num %= 10;
            r *= num;
            if (l == r)count++;
            if (count == n)
            {
                cout << i * i << endl;
                break;
            }
        }
    }
    return 0;
}
