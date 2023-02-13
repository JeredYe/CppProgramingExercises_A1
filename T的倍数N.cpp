// T的倍数N.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int pow10(int num)
{
    int i = 1;
    for (int j = 0; j < num; j++)i *= 10;
    return i;
}
int main()
{
    int n;
    while (cin >> n)
    {
        bool exist = false;
        for (int i = 0; i < 100000; i++)
        {
            int origin = 7 + 10 * i;
            int j = 0,buf=origin;
            for (; j < 10; j++)
            {
                buf /= 10;
                if (buf == 0)break;
            }
            int change = i + 7 * pow10(j);
            if (change / origin == n && change % origin == 0)
            {
                cout << origin << endl;
                exist = true;
                break;
            }
        }
        if (!exist)cout << "No" << endl;
    }
    return 0;
}
