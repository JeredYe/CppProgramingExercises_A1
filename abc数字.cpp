// abc数字.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
    int a, b, c;
    while (cin >> a >> b >> c)
    {
        int result = 0, same = 0;
        result = (a * 100 + b * 10 + c) * (c * 100 + b * 10 + a);
        char buffer[16];
        sprintf_s(buffer, "%d", result);
        for (int i=0;i<strlen(buffer);i++)
        {
            if (buffer[i] - 48 == a || buffer[i] - 48 == b || buffer[i] - 48 == c)same++;
        }
        cout << result << " " << same << endl;
    }
    return 0;
}