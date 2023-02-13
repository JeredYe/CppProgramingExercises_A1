// 银行存款到期日.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int main()
{
    int yyyy, mm, dd, m;
    cin >> yyyy >> mm >> dd >> m;
    if (mm + m > 12)
    {
        yyyy+= (mm + m)/12;
        mm = (mm + m) % 12;
        if (mm == 0)mm=12;
    }
    else
    {
        mm += m;
    }

    switch (mm)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            break;
        case 2:
            if (yyyy % 4 == 0)dd = 29;
            else dd = 28;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            dd = 30;
            break;
    }
    cout << yyyy << " " << mm << " " << dd << endl;
}
