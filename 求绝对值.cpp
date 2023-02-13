// 求绝对值.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
#include <cstring>
int main()
{
    char Str[1024];
    while (cin >> Str)
    {
        for (int i = 0; i < strlen(Str); i++)if (Str[i] != '-')cout << Str[i];
        cout << endl;
    }
    return 0;
}
