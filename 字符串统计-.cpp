// 字符串统计-.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s1[256], s2[256];
    while (cin >> s1 >> s2)
    {
        bool Alpha1[26] = { 0 }, Alpha2[26] = { 0 };
        for (int i = 0; i < strlen(s1); i++)Alpha1[s1[i] - 'a'] = 1;
        for (int i = 0; i < strlen(s2); i++)Alpha2[s2[i] - 'a'] = 1;
        cout << "in s1 or s2:";
        for (int i = 0; i < 26; i++)if (Alpha1[i] || Alpha2[i])cout << (char)(i + 'a');
        cout << endl;
        cout << "in s1 and s2:";
        for (int i = 0; i < 26; i++)if (Alpha1[i] && Alpha2[i])cout << (char)(i + 'a');
        cout << endl<<"in s1 but not in s2 ,or in s2 but not in s1:";
        for (int i = 0; i < 26; i++)if (Alpha1[i]!= Alpha2[i])cout << (char)(i + 'a');
        cout << endl << "not in s1 and s2:";
        for (int i = 0; i < 26; i++)if (!Alpha1[i] && !Alpha2[i])cout << (char)(i + 'a');
        cout << endl << endl;
    }
    return 0;
}