// 判断质数.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int Prime[2000] = { 0 }, amount = 1;
int main()
{
    Prime[0] = 2;
    for (int i = 3; i < 10000; i++)
    {
        bool Pr = true;
        for (int j = 0; j < amount; j++)if (!(i % Prime[j]))Pr = false;
        if (Pr)Prime[amount++] = i;
    }
    int num;
    while (cin >> num)
    {
        bool Pr = false;
        for (int j = 0; j < amount; j++)if (num == Prime[j])Pr = true;
        cout << (Pr ? 1 : 0) << endl;
    }
    return 0;
}
//int A = amount;
//while (amount--)cout << Prime[A - amount - 1] << endl;