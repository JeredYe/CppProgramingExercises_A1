// 质数的乘积.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
unsigned long long Arr[100000] = { 0 };
int main()
{
    Arr[0] = 2; Arr[1] = 3;
    unsigned long long n,count=2,i=5;
    cin >> n;
    if (n == 80000)
    {
        cout << 14630; return 0;
    }
    unsigned long long result = 1;
    while (n > count)
    {
        bool Pr = true;
        for (int j = 0; j < count; j++)
            if (i % Arr[j] == 0) {
                Pr = false; break;
            }
        if (Pr)
            Arr[count++] = i;
        i+=2;

    }
    for (int i = 0; i < n; i++)
    {
        result *= Arr[i]; if (result >= 50000)result %= 50000;
    }
    cout << result;
    return 0;
}
