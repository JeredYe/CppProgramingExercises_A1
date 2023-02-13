// 密码分析.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
#include <cstring>
int main()
{
    char str[512];
    while (cin.getline(str, 512))
    {
        int Freq[26] = { 0 };
        for (int i = 0; i < strlen(str); i++)
        {
            if (str[i] <= 'Z' && str[i] >= 'A')Freq[str[i] - 'A']++;
            if (str[i] <= 'z' && str[i] >= 'a')Freq[str[i] - 'a']++;
        }
        int max = 0; 
        for (int i = 0; i < 26; i++)max = (Freq[i] > max ? Freq[i] : max);

        for (int j = max; j > 0; j--)
            for (int i = 0; i < 26; i++)
                if (Freq[i]==j)cout << (char)('A' + i) << " " << Freq[i]<<endl;
        cout << endl;
    }
    return 0;
}
