// 数字密码发生器.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <cstring>
using namespace std;
int Compress(int n)
{
    int result = 0;
    while (n)
    {
        result += n % 10;
        n /= 10;
    }
    return (result < 10 ? result : Compress(result));
}
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        char Str[101] = { 0 }, Code[17][7] = { 0 };
        cin >> Str;
        for (int i = 0; i < strlen(Str); i++)
            Code[i / 6][i % 6] = Str[i];
        int CodeN[6] = { 0 };
        for (int i = 0; i < 6; i++)
        {
            for (int j = 0; j < 17; j++)
                CodeN[i] += Code[j][i];
            CodeN[i] = Compress(CodeN[i]);
            cout << CodeN[i];
        }
        cout << endl;

    }
    return 0;
}
