// 环.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int pow(int n)
{
    int res = 1;
    while (n--)res *= 10;
    return res;
}
int abso(int n)
{
    return (n > 0 ? n : -n);
}
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int Arr[9] = { 0 },ClockW[9]={0};
        
        for (int i = 0; i < 9; i++)
            cin >> Arr[i];
        int result = 0;
        for (int i = 0; i < 9; i++)
        {
            int count = 0;
            long long Cl = 0, CoCl = 0;
            for (int j = i; j < 9+i; j++)
            {
                ClockW[count++] = Arr[j % 9];
            }
            for (int j = 0; j < 9; j++)
            {
                Cl += ClockW[j] * pow(8 - j);
                CoCl+= ClockW[j] * pow(j);
            }
            int d = abso(Cl - CoCl);
            if (d % 396 == 0)result++;
        }
        cout << result << endl;
    }
    return 0;
}
