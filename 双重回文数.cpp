// 双重回文数.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <cstring>
#include <string>
using namespace std;
bool isBack(string str)
{
    for (int i = 0; i < str.length() / 2; i++)
        if (str[i] != str[str.length() - 1 - i])return false;
    return true;
}
string Convert(int num, int type)
{
    char str[256] = { 0 }, count = 0;
    while (num)
    {
        str[count++] = '0' + num % type;
        num /= type;
    }
    char arr[256] = { 0 };
    for (int i = 0; i < count; i++)arr[i]= str[count - 1 - i];
    string result(arr);
    return result;
}
bool Judge(int num)
{
    int t = 0;
    for (int i = 2; i <= 10; i++)
    {
        if (isBack(Convert(num, i)))t++;
        if (t >= 2)return true;
    }
    return false;
}
int main()
{
    int N, S, t = 0;
    cin >> N >> S;
    for (int i = S + 1;t<N; i++)
        if (Judge(i))
        {
            cout << i << endl;
            t++;
        }
    return 0;
}

