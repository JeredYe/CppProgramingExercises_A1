// 求n天后的日期.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int main()
{
    int y, m, d, past;
    cin >> y >> m >> d >> past;
    while (past--)
    {
        d++;
        switch (m)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if (d >31)
            {
                d = 1;
                m++;
            }
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            if (d >30)
            {
                d = 1;
                m++;
            }
            break;
        case 2:
            if (d >29 && (!(y % 400) || (y % 100 && !(y % 4))))
            {
                d = 1; m++;
            }
            else if (d >28 && !(!(y % 400) || (y % 100 && !(y % 4))))
            {
                d = 1; m++;
            }
            break;
        }
        if (m == 13)
        {
            m = 1; y++;
        }
    }
    cout << y << " " << m << " " << d << endl;
    return 0;
}

