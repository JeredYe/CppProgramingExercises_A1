// 字符串排序.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char Str[1024] = { 0 };
    while (cin >> Str)
    {
        for (int i=0;i<strlen(Str);i++)
            for (int j = 0; j < strlen(Str) - i-1; j++)
                if (Str[j] > Str[j + 1])
                {
                    char Buf = Str[j];
                    Str[j] = Str[j + 1];
                    Str[j + 1] = Buf;
                }
        cout << Str << endl;
    }
    return 0;
}
