// 字符串压缩.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char Str[1001] = { 0 };
    while (cin >> Str)
    {
        for (int i = 0; i < strlen(Str); i++)
            Str[i] = (Str[i] >= 'A' && Str[i] <= 'Z' ? Str[i] + 32 : Str[i]);
        int count = 0;
        char now = 0;
        for (int i = 0; i < strlen(Str) + 1; i++)
            if (now != Str[i])
            {
                if (now)
                {
                    if (count >= 2)cout << count;
                    cout << (char)now;
                }
                count = 1;
                now = Str[i];
            }
            else
            {
                count++;
            }
        cout << endl;
    }
    return 0;
}
