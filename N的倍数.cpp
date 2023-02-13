// N的倍数.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int tobin(int d)
{
    int bin = 0,i=1;
    while (d)
    {
        bin+= (d % 2)*i;
        d /= 2;
        i *= 10;
    }
    return bin;
}
int main()
{
    int n;
    while (cin >> n)
    {
        int i = 1;
        while (tobin(i) % n != 0)
            i++;
        cout << tobin(i) << endl;
    }
    return 0;
}

