// 回文问题.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char str[200] = { 0 };
    bool FLAG = true;
    while (cin >> str)
    {
        FLAG = true;
        for (int i = 0; i < strlen(str) / 2; i++)
        {
            if (str[i] != str[strlen(str) - 1 - i])
            {
                FLAG = !FLAG;
                break;
            }
        }
        if (FLAG)cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}

