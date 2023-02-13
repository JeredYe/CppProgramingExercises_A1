// 实数运算.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    double a, b;
    cin >> a >> b;
    char symbol;
    cin >> symbol;
    switch (symbol)
    {
    case '+':
        printf("%.1f\n", a + b);
        break;
    case '-':
        printf("%.1f\n", a - b);
        break;
    case '*':
        printf("%.1f\n", a * b);
        break;
    case '/':
        if(b!=0)
        printf("%.1f\n", a / b);
        else
        cout <<"Wrong!" << endl;
        break;
    default:
        break;
    }
}
