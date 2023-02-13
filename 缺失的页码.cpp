// 缺失的页码.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int Arr[128] = { 0 };
int Judge(int Num)
{
    for (int i = 0; i < 128; i++)
        if (Num == Arr[i])return i;
    return -1;
}
int Minimun(int Num)
{
    for (int i = 0; i < 128; i++)
        if (Num <= Arr[i])return i+2;
    return -1;
}
int main()
{
    for (int i = 0; i < 128; i++)
        Arr[i] = (i ? i + 1 + Arr[i - 1] : 1);
    int S;
    while (cin >> S)
    {
        if (S == 0)return 0;
        int i = 1, total = 0;
        for (; i <= Minimun(S); i += 2)
            if (Judge(2 * i + 1 + S)!=-1&& Judge(2 * i + 1 + S)%2!=0) {
                total = Judge(2 * i + 1 + S) + 1;
                break;
            }
        if (total)
            cout << total << " " << i << " " << i + 1 << endl;
        else
            cout << "Impossible" << endl;

    }
    return 0;
}
