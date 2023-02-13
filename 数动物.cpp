// 数动物.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int main()
{
    int n,m;
    int dove, rabbit;
    while (cin >> n >> m)
    {
        rabbit = (m - 2 * n) / 2;
        dove = 2 * n - m / 2;
        if (m%2!=0||rabbit<0||dove<0)cout << "Error" << endl;
        else cout << dove << " " << rabbit << endl;
    }
    return 0;
}
