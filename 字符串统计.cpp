// 字符串统计.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        char str[200]={0};
        int count = 0;
        cin >> str;
        for (int i = 0; i < 200; i++)if (str[i] >= 'a' && str[i] <= 'z')count++;
        cout << count << endl;
    }
    return 0;
}