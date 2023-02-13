// 纯粹素数.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>
#include <cmath>
using namespace std;
bool IsPrime(int Num)
{
    if (Num == -1)return true;
    for (int i = 2; i <= (int)sqrt(Num); i++)
        if (Num % i == 0||Num%10==1)return false;
    return true;
}
int GetLower(int num)
{
    string Temp(to_string(num));
    Temp.erase(0, 1);
    if (Temp.length() == 0)return -1;
    return atoi(Temp.c_str());
}
int main()
{
    int n;
    while (cin>>n)
    {
        int count = 0;
        for (int i=1012;;i++)
        {
            
            int Num = i;
            bool TruePrime = false;
            if (!IsPrime(i))continue;
            else
            {
                TruePrime = true;
                while (Num != -1)
                {
                    if (!IsPrime(Num))
                    {
                        TruePrime = false;
                        break;
                    }
                    Num = GetLower(Num);
                }
                if (TruePrime)count++;
            }
            if (n == count) {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}

