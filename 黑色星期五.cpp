// 黑色星期五.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int main()
{
    int year,count=0,weekday=3;//0start=1
    cin >> year;
    bool RUN = false;
    int pastyears = 1998;
    for (int a = 0; a < year - 1998; a++)
    {
        RUN = (!(pastyears % 4) && (pastyears % 100) || !(pastyears % 400));
        for (int i : { 31, (RUN ? 29 : 28), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 })
            for (int j = 1; j < i + 1; j++)
                weekday = (weekday == 6 ? 0 : weekday + 1);
        pastyears++;
    }
    RUN = (!(year % 4) && (year % 100) || !(year % 400));
    for (int i : { 31, (RUN ? 29 : 28), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 })
        for (int j = 1; j < i + 1; j++)
        {
            weekday = (weekday == 6 ? 0 : weekday + 1);
            if (j == 13 && weekday == 5)count++;
        }
    cout << count << endl;
    return 0;
}
