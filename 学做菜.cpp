// 学做菜.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int A=0, B=0, C=0, D=0, E = 0;
    while (a >= 2 &&b && d >= 2)
    {
        A++;
        a -= 2; b--; d -= 2;
    }
    while (a && b && c && d)
    {
        B++;
        a--; b--; c--; d--;
    }
    while (c >= 2 && d)
    {
        C++;
        c -= 2;d --;
    }
    while (b >= 3)
    {
        D++;
        b -= 3;
    }
    while (a  && d)
    {
        E++;
        a --; d--;
    }
    cout << A << endl << B << endl << C << endl << D << endl << E << endl;
}
