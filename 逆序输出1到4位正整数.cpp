// 逆序输出1到4位正整数.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char str[16];
    cin >> str;
    if (strlen(str) > 4||str[0]=='-'||str[0]=='0')
    {
        cout << "error!" << endl;
    }
    else
    {
        for (int i = 0; i < strlen(str); i++)
        {
            cout << str[strlen(str)-1 - i];
        }
    }

}
