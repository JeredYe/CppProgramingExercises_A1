// 牧场安全系统.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <cstring>
using namespace std;
char Arrange[16] = { 0 };
char Chart[16] = { 0 };
bool S[16] = { 0 };
int countN = 0;
int sum = 0;
int L, C;
bool Judge(char* str)
{
    int Vow = 0, Con = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            Vow++;
        else
            Con++;
        if (i)if (str[i - 1] > str[i])return false;
    }

    return Vow && (Con>=2)&&strlen(str)==L;
}
bool IsReverse(char* str)
{
    for (int i = 0; i < strlen(str); i++)
        if (i)if (str[i - 1] > str[i])return true;
    return false;
}
void dfs()
{
    if (countN==L)
    {
        if (Judge(Arrange))
        {
            cout << Arrange << endl;
            sum++;
        }
        else
            return;
    }
    if (IsReverse(Arrange))return;
    for (int i = C-1; i >=0; i--)
    {
        if (!S[i])
        {
            Arrange[countN] = Chart[i];
            S[i] = true;
            countN++;
            dfs();
            countN--;
            S[i] = false;
            Arrange[countN] = 0;
        }
    }

}

int main()
{
    while (cin >> L >> C)
    {
        for (int i = 0; i < C; i++)cin >> Chart[i];
        dfs();
        cout << sum << endl;
        sum = 0;
    }
    return 0;
}
