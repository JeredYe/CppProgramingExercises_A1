// 日期.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char str[5];
    while (cin >> str)
    {
        if (!strcmp("Sun", str))cout << "Sunday" << endl;
        if (!strcmp("Mon", str))cout << "Monday" << endl;
        if (!strcmp("Tue", str))cout << "Tuesday" << endl;
        if (!strcmp("Wed", str))cout << "Wednesday" << endl;
        if (!strcmp("Thu", str))cout << "Thursday" << endl;
        if (!strcmp("Fri", str))cout << "Friday" << endl;
        if (!strcmp("Sat", str))cout << "Saturday" << endl;
    }
    return 0;
}
