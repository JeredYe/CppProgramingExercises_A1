// 最棒的回文.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <cstring>
#include <string>
#define min(a,b) (a<b?a:b)
using namespace std;
bool IsIncluded(char symbol)
{
    return (symbol >= '0' && symbol <= '9' || symbol >= 'a' && symbol <= 'z' || symbol >= 'A' && symbol <= 'Z');
}
bool IsPalin(const char* str1)
{
    char str[2048] = { 0 };
    int count = 0;
    for (int i = 0; i < strlen(str1); i++)
        if (IsIncluded(str1[i]))
        {
            if(str1[i] >= 'A' && str1[i] <= 'Z')
                str[count++] = str1[i]+32;
            else
                str[count++] = str1[i];
        }
    for (int i = 0; i < strlen(str) / 2; i++)
        if (str[i] != str[strlen(str) - 1 - i])return false;
    return true;
}
int getAvailableLen(string str)
{
    int count = 0;
    for (int i = 0; i < str.length(); i++)if (IsIncluded(str[i]))count++;
    return count;
}
int main()
{
    string str,maxstr,temp;
    int max=0;
    while (getline(cin,temp)) { str.append(temp.c_str()); str.append("\n"); }
    str.erase(str.length()-1);
    for (int i = 0; i < str.length() - 3; i++)
    {
        if (!IsIncluded(str[i]))continue;
        for (int j = max; j < min(2000, str.length() - i); j++)
        {
            int avlen = getAvailableLen(str.substr(i, j));
            if (avlen > max && IsPalin(str.substr(i, j).c_str()))
            {
                maxstr = str.substr(i, j);
                max = avlen;
            }
        }

    }
    cout << max << endl << maxstr << endl;
    return 0;
}
