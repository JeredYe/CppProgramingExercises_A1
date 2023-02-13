// 请给我加密.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        char Str[256] = { 0 };
        int Code[256] = { 0 };
        int Key;
        cin.get();
        cin.get(Str,256);
        cin.get();
        cin >> Key;
        for (int i = 0; i < strlen(Str); i++)
        {
            if (Str[i] >= 'A' && Str[i] <= 'Z')Code[i] = Str[i] - 'A' + 1 + Key;
            else if (Str[i] >= 'a' && Str[i] <= 'z')Code[i] = (Str[i] - 32) - 'A' + 1+Key;
            else if (Str[i] == ' ')Code[i] = 0;
            else Code[i] = Str[i] + 100;
        }
        for (int i = 0; i < strlen(Str); i++)
        {
            if (i != 0)cout << " ";
            cout << Code[i];
        }
        cout << endl;
    }
    return 0;
}
