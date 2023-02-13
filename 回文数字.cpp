// 回文数字.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
#include <cstdio>

int main()
{
    int n;
    cin >> n;
    bool exist = false;
    for (int i = 100; i <= 999; i++)
    {
        char Arr[7] = { 0 };
        sprintf(Arr, "%d", i);
        Arr[4] = Arr[0];
        Arr[3] = Arr[1];
            int sum = 0;
            for (int i = 0; i < 5; i++)sum += Arr[i] - '0';
            if (sum == n)
            {
                cout << Arr << endl;
                exist = true;
            }
    }
    for (int i = 100; i <= 999; i++)
    {
        char Arr[7] = { 0 };
        sprintf(Arr, "%d", i);
        Arr[5] = Arr[0];
        Arr[4] = Arr[1];
        Arr[3] = Arr[2];
        int sum = 0;
        for (int i = 0; i < 6; i++)sum += Arr[i] - '0';
        if (sum == n)
        {
            cout << Arr << endl;
            exist = true;
        }
    }
    if (!exist)cout << -1 << endl;
    return 0;
}


//int pow10(int num)
//{
//    int n = 1;
//    while (num--)n *= 10;
//    return n;
//}
//for (int i = 100; i < 9999; i++)
//{
//    int back[16] = { 0 }, backodd[16] = { 0 };
//    int b = 8, a = 0, buf = i;
//    while (b--)
//        if (buf / pow10(b) > 0) {
//            backodd[a] = buf / pow10(b);
//            back[a++] = buf / pow10(b);
//            buf %= pow10(b);
//        }
//    int len = (2 * a - 1);
//    for (int j = 0; j < a; j++)
//    {
//        back[len - j] = back[j];
//        backodd[len - j - 1] = backodd[j];
//    }
//    int sum = 0, sumodd = 0;
//    for (int j = 0; j < len + 1; j++)
//    {
//        sum += back[j];
//        sumodd += backodd[j];
//    }
//    if (sumodd == n)
//    {
//        for (int i = 0; i < len + 1; i++)cout << backodd[i];
//        cout << "odd" << endl;
//    }
//    if (sum == n)
//    {
//        for (int i = 0; i < len + 1; i++)cout << back[i];
//        cout << endl;
//    }
//}