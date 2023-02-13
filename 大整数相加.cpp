// 大整数相加.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <cstring>
using namespace std;
int len(char* str)
{
    int length = 0;
    int zero = 0;
    for (int i = 0;; i++)
    {
        if (str[i] != 0)
            zero == 0;
        else
            zero++;
        length++;
        if (zero == 20)break;
    }
    length -= 20;
    return length;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        char str1[1024] = { 0 }, str2[1024] = { 0 }, ans[1024] = { 0 };
        cin >> str1 >> str2;
        int count = 0;
        for (int i = strlen(str1) - 1; i >= 0; i--)
        {
            ans[count++] += str1[i] - '0';
        }
        count = 0;
        for (int i = strlen(str2) - 1; i >= 0; i--)
        {
            ans[count++] += str2[i] - '0';
        }
        for (int i = 0; i < len(ans); i++)
        {
            if (ans[i] >= 10)
            {
                ans[i + 1] += ans[i] / 10;
                ans[i] %= 10;
            }
            ans[i] += '0';
        }
        cout << "Case " << i << ":" << endl << str1 << " + " << str2 << " = ";
        for (int i = strlen(ans) - 1; i >= 0; i--)
            cout << ans[i];
        cout << endl<<endl;
    }
    return 0;
}
