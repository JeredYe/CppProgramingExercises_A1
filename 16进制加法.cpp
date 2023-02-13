// 16进制加法.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <cstring>
using namespace std;
int toD(char N)
{
    if (N >= '0' && N <= '9')return N - '0';
    else return N - 'a' + 10;
}
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        char str1[9] = { 0 }, str2[9] = { 0 }, ans[9] = { 0 };
        cin >> str1 >> str2;
        int count = 0;
        for (int i = strlen(str1) - 1; i >= 0; i--)
            ans[count++] += toD(str1[i]);
        count = 0;
        for (int i = strlen(str2) - 1; i >= 0; i--)
            ans[count++] += toD(str2[i]);
        for (int i = 0; i < 9; i++)
        {
            if (ans[i] >= 16)
            {
                ans[i + 1] += ans[i] / 16;
                ans[i] %= 16;
            }
            if (ans[i] >= 0 && ans[i] <= 9)ans[i] += '0';
            else
                ans[i] += 'a' - 10;
        }

        bool zero = true;
        for (int i = 8; i >= 0; i--)
        {
            if (ans[i] != '0')zero = false;
            if (!zero)cout << ans[i];
        }
        cout << endl;
    }
    return 0;
}
