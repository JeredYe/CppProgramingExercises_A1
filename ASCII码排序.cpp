// ASCII码排序.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
#include <cstring>
void Arrange(char* str)
{
    for (int i = 0; i < strlen(str); i++)
    {
        for (int j = 1; j < strlen(str) - i; j++)
        {
            char buf = str[j];
            if (buf < str[j - 1])
            {
                str[j] = str[j - 1];
                str[j-1] = buf;

            }
        }
    }
    for (int i = 0; i < strlen(str); i++)
    {
        if (i)cout << ' ';
        cout << str[i];
    }
    cout << endl;
}
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        char str[10];
        cin >> str;
        Arrange(str);
    }
    return 0;
}
