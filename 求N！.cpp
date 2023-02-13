// 求N！.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;
int len = 1;
void Multi(unsigned __int64 Array[], int num)
{
    bool Add = false;
    for (int i = len - 1; i >= 0; i--)
    {

        Array[i] *= num;
        if (Array[i] >= 1000000000)
        {
            if (Array[i + 1] == 0)Add = true;
            Array[i + 1] += Array[i] / 1000000000;
            Array[i] %= 1000000000;
        }
    }
    if (Add)len++;
}
int main()
{
    int n;
    while (cin >> n)
    {
        unsigned __int64 Arr[1000] = { 0 };
        Arr[0] = 1;

        for (int i = 1; i < n + 1; i++)
        {
            Multi(Arr, i);
        }
        for (int i = len - 1; i >= 0; i--)
            if (Arr[i])
            {
                if (i != len - 1 && Arr[i] < 100000000)
                {
                    int t = Arr[i];
                    while (t < 100000000) { cout << "0"; t *= 10; }
                }
                cout << Arr[i];
            }
            else cout << "000000000";
        cout << endl;
        len = 1;
    }
    return 0;
}
