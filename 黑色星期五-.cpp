// 黑色星期五-.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int main()
{
    int n, year, count[7]={0}, weekday = 0;//0start=1
    cin >> n;
    year = 1900 + n;
    bool RUN = false;
    int pastyears = 1900;
    for (int a = 0; a < year - 1900; a++)
    {
        RUN = (!(pastyears % 4) && (pastyears % 100) || !(pastyears % 400));
        for (int i : { 31, (RUN ? 29 : 28), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 })
            for (int j = 1; j < i + 1; j++)
            {
                weekday = (weekday == 6 ? 0 : weekday + 1);
                if (j == 13)
                    switch (weekday)
                    {
                    case 6:
                        count[0]++;
                        break;

                    case 0:
                        count[1]++;
                        break;
                    default:
                        count[weekday+1]++;
                        break;
                    }
            }
        pastyears++;
    }
    cout << count[0];
    for (int i = 1; i < 7; i++)
        cout << " " << count[i];
    cout << endl;
    return 0;
}

//RUN = (!(year % 4) && (year % 100) || !(year % 400));
//for (int i : { 31, (RUN ? 29 : 28), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 })
//    for (int j = 1; j < i + 1; j++)
//    {
//        weekday = (weekday == 6 ? 0 : weekday + 1);
//        if (j == 13 && weekday == 5)count++;
//    }