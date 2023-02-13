// 公共汽车.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#define max(a,b) (a>b? a:b)
using namespace std;
int main()
{
    int a,TotalGetOn,MaxSeats;
    while (cin >> a)
    {
        TotalGetOn = 0;
        MaxSeats = 0;
        int CurrentP = 0;
        for (int i = 1; i < a+1; i++)
        {
            int GetOn = a - i;
            TotalGetOn += GetOn;
            CurrentP += GetOn- (i - 1);////
            MaxSeats = max(MaxSeats, CurrentP);
        }
        cout << MaxSeats << " " << TotalGetOn << endl;
    }
    return 0;
}