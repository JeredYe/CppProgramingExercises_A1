// 算菜价.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
#include <iomanip>
int main()
{
    int a;
    cin >> a;
    while (a--)
    {
        double count = 0;
        int n;
        cin >> n;
        while (n--)
        {
            char Name[16] = { 0 };
            double a = 0, b = 0;
            cin >> Name >> a >> b;
            count += a * b;
        }
        cout << fixed << setprecision(1) << count << endl;
    }
    return 0;
}

