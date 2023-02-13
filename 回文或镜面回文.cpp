// 回文或镜面回文.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//




#include <iostream>
#include <cstring>
using namespace std;

char Reverse(char Origin)
{
    switch (Origin)
    {
    case '3':return 'E'; break;
    case 'E':return '3'; break;
    case 'J':return 'L'; break;
    case 'L':return 'J'; break;
    case '0':return 'O'; break;
    case 'Z':return '5'; break;
    case '5':return 'Z'; break;
    case '2':return 'S'; break;
    case 'S':return '2'; break;
    }
    return Origin;
}
bool IsPalin(char* str)
{
    for (int i = 0; i < strlen(str) / 2; i++)
        if (str[i] != str[strlen(str) - 1 - i])return false;
    return true;
}
bool IsMirror(char* str)
{
    for (int i = 0; i < strlen(str) / 2+1; i++)
        if (Reverse(str[i]) != str[strlen(str) - 1 - i])return false;
    return true;
}
int main()
{
    char str[32] = { 0 };
    while (cin >> str)
    {
        bool Palin = IsPalin(str), Mirror = IsMirror(str);
        if (Palin && Mirror)cout << str << " -- is a mirrored palindrome." << endl << endl;
        if (!Palin && !Mirror)cout << str << " -- is not a palindrome." << endl << endl;
        if (Palin && !Mirror)cout << str << " -- is a regular palindrome." << endl << endl;
        if (!Palin && Mirror)cout << str << " -- is a mirrored string." << endl << endl;
    }
    return 0;
}
