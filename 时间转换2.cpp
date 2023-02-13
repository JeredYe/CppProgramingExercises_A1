// 时间转换2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int main()
{
    int YYYY,DD, HH, MM, SS;
    unsigned long long Seconds;
    cin >> Seconds;
    YYYY = Seconds / 31536000;
    Seconds %= 31536000;
    DD = Seconds / 86400;
    Seconds %= 86400;
    HH = Seconds / 3600;
    Seconds %= 3600;
    MM = Seconds / 60;
    Seconds %= 60;
    SS = Seconds;

    if (YYYY != 0)
    {
        cout << YYYY;
        cout << " year"<<(YYYY>1?"s":"") << " ";
    }
    if (DD != 0)
    {
        cout << DD;
        cout << " day" << (DD > 1 ? "s" : "") << " ";
    }
    if (HH != 0 || DD != 0)
    {
        if (HH < 10)cout << "0";
        cout << HH << ":";
    }
    if (MM != 0 || HH!=0)
    {
        if (MM < 10)cout << "0";
        cout << MM << ":";
    }
    if (SS != 0 || MM!=0)
    {
        if (SS < 10 &&!(DD==0&&HH==0&&MM==0))cout << "0";
        cout << SS <<endl;
    }
}