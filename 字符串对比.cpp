// 字符串对比.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <cstring>
using namespace std;
int Compare(char* Str1, char* Str2)
{
    if (strlen(Str1) != strlen(Str2))return 1;
    if (strcmp(Str1,Str2)==0)return 2;
    for (int i = 0; i < strlen(Str1);i++)
    {
        Str1[i] = (Str1[i] >= 'A' && Str1[i] <= 'Z' ? Str1[i] + 32 : Str1[i]);
        Str2[i] = (Str2[i] >= 'A' && Str2[i] <= 'Z' ? Str2[i] + 32 : Str2[i]);
    }
    return(strcmp(Str1, Str2) == 0 ? 3: 4);
}
int main()
{
    char Str1[64], Str2[64];
    cin >> Str1;
    cin >> Str2;
    cout << Compare(Str1, Str2) << endl;
    return 0;
}
