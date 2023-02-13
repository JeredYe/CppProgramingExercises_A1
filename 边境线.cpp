// 边境线.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int main()
{
    double x, y;
    while (cin>>x>>y)
    {
        if (x * x + y * y - 4.5 * 4.5 < 0)
        {
            cout << "in"<<endl;
        }
        if (x * x + y * y - 4.5 * 4.5 == 0)
        {
            cout << "on" << endl;
        }
        if (x * x + y * y - 4.5 * 4.5 > 0)
        {
            cout << "out" << endl;
        }
    }
    return 0;
}
