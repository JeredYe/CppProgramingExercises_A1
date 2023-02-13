// 手机短号.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        char Short[7] = { 0 }, Long[12];
        cin >> Long;
        Short[0] = '6';
        for (int i = 1; i < 6; i++)Short[i] = Long[i+5];
        cout << Short << endl;
    }
    return 0;
}
