// 转换成十进制.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int pow(int a, int b)
{
    int x = 1;
    while (b--)x *= a;
    return x;
}
int main()
{
    int type;
    char str[32];
    while (cin >> type >> str)
    {
        int powindex = 0, result = 0;
        while (strlen(str) != 0)
        {
            char Last = str[strlen(str)-1];
            result += (Last >= '0' && Last <= '9' ? Last - '0' :Last - 'A'+10)*pow(type,powindex++);
            str[strlen(str)-1] = 0;
        }
        cout << result << endl;
    }
    return 0;
}
