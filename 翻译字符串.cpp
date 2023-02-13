// 翻译字符串.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char str[256],strNew[256]={0};
    while (cin >> str)
    {
        for (int i = 0; i < 256; i++)strNew[i] = 0;
        int amount = 0;
        for (int i = 0; i < strlen(str); i++)
        {
            if (str[i] >= '0' && str[i] <= '9')
            {
                for (int j=0;j< str[i]-'0'+1;j++)
                strNew[amount++] = str[i+1];
                i++;//后移一位
            }
            else
                strNew[amount++] = str[i];
        }
        for (int i = 0; i < strlen(strNew); i++)
        {
            cout << strNew[i];
            if ((i + 1) % 3 == 0)cout << (i< strlen(strNew)-1?" ":"");
        }
        cout << endl;
    }
    return 0;
}
