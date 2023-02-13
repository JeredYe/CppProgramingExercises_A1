// 航班时间.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.get();
    while (n--)
    {
        int h1=0, m1 = 0, s1 = 0, h2 = 0, m2 = 0, s2 = 0;
        int h3 = 0, m3 = 0, s3 = 0, h4 = 0, m4 = 0, s4 = 0;
        int Time1 = 0, Time2 = 0,Time=0;
        int offs1=0, offs2=0;
        char buffer[64]={0};
        cin.getline(buffer, 64);
        sscanf(buffer, "%d:%d:%d %d:%d:%d (+%d)",&h1,&m1,&s1, &h2, &m2, &s2,&offs1);
        offs1 = (offs1 < 5 && offs1>0 ? offs1 : 0);
        cin.getline(buffer, 64);
        sscanf(buffer, "%d:%d:%d %d:%d:%d (+%d)", &h3, &m3, &s3, &h4, &m4, &s4, &offs2);
        offs2 = (offs2 < 5 && offs2>0 ? offs2 : 0);

        Time1 += (offs1 ? (24 - h1 + h2) * 3600 + (offs1 - 1) * 86400 : (h2 - h1) * 3600);

        Time1 += (m2 - m1) * 60 + (s2-s1);

        Time2 += (offs2 ? (24 - h3 + h4) * 3600 + (offs2 - 1) * 86400 : (h4 - h3) * 3600);
        Time2 += (m4 - m3) * 60 + (s4 - s3);

        Time = (Time1 != Time2 ? ((Time1>Time2?Time2:Time1)+((Time1 - Time2) > 0 ? 1 : -1) * (Time1 - Time2) / 2) : Time1);
        int H, M, S;
        H = Time / 3600; Time %= 3600;
        M = Time / 60; Time %= 60;
        S = Time;
        printf("%.2d:%.2d:%.2d\n", H, M, S);
    }
    return 0;
}
