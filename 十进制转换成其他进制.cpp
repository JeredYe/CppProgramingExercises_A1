// 十进制转换成其他进制.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <cstring>
void Convert(int Num, char* Result, int Type)
{
    int i = 12;
    if (Type < 4)i = 16;
    bool flag = false;
    for (; i >= 0; i--)
    {
        long long Buf = 1;
        int j = 0;
        for (; j < i; j++)
        {
            Buf *= Type;
        }
        if (Num >= Buf)
        {
            int times = Num / Buf;
            Num -= times * Buf;

            char Symbol;
            if (times >= 0 && times <= 9)
                Symbol = times + '0';
            else
                Symbol = times + 'A' - 10;
            Result[strlen(Result)] = Symbol;
            flag = true;
        }
        else if (flag)
        {
            Result[strlen(Result)] = '0';
        }
        else if (Num < Type)
        {
            char Symbol;
            if (Num >= 0 && Num <= 9)
                Symbol = Num + '0';
            else
                Symbol = Num + 'A' - 10;
            Result[strlen(Result)] = Symbol;
            break;
        }

    }
}
using namespace std;
int main()
{
    int Num, Type;
    while (cin >> Num >> Type)
    {
        char Result[32] = { 0 };

        bool SIGN = false;
        if (Num < 0)
        {
            SIGN = true;
            Num = -Num;
        }
        Convert(Num, Result, Type);
        if (SIGN)cout << "-";
        bool flag = false;//去除开头0
        for (int i = 0; i < strlen(Result); i++)
        {
            if (Result[i] != '0' || flag)
            {
                cout << Result[i];
                flag = true;
            }
        }
        if (!flag)cout << "0";
        cout << endl;
    }
    return 0;
}