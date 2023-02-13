// 回文质数.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

//bool IsBackNum(int num)
//{
//    int n1, n2;
//    for (n1 = num, n2 = 0; n1 != 0; n1 /= 10)
//        n2 = 10 * n2 + n1 % 10;
//    if (n2 == num) return 1;
//    else return 0;
//}

#include <cstdio>
#include <cstring>
using namespace std;
#include <iostream>
#include <cmath>
bool IsBackNum(int num)
{
    char buf[16] = { 0 };
    bool Status = true;
    sprintf(buf, "%d", num);
    for (int i = 0; i < strlen(buf); i++)Status = (buf[i] != buf[strlen(buf) - i - 1] ? false : Status);
    return Status;
}



bool IsPrime(int num)
{
    int count = 0;
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
            count++;
    }
    if (count == 0)
        return 1;
}

int main()
{
    int min, max;
    cin >> min >> max;
    for (int i = min; i <= max; i++)
    {
        if (IsPrime(i) && IsBackNum(i))
            cout << i << endl;
    }
    return 0;
}
