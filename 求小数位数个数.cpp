// 求小数位数个数.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char Str[100];
    while (cin >> Str)
    {
        bool FLAG = false;
        int count = 0;
        for (int i = 0; i < strlen(Str); i++)
        {
            if (FLAG)count++;
            if (Str[i] == '.')FLAG = true;
            
        }
        cout << count << endl;
    }
    return 0;
}
