// 幼儿园分班问题.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int main()
{
    int age;
    while(cin >> age)
    switch (age)
    {
    case 2:
    case 3:
        cout << "One." << endl;
        break;
    case 4:
        cout << "Two." << endl;
        break;
    case 5:
    case 6:
        cout << "Three." << endl;
        break;
    default:
        cout << "No." << endl;
        break;
    }
    return 0;
}
