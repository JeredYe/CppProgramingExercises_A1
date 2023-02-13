// Coin Change.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

//int tmp5 = 0, tmp10 = 0, tmp25 = 0, tmp50 = 0;
//while (total)
//{
//    total -= 5;
//    result++;
//    tmp5++;
//    if (tmp5 >= 2)
//    {
//        result++;
//        tmp10 += tmp5 / 2;
//        tmp5 %= 2;
//    }
//    if (tmp10 >= 3)
//    {
//        result++;
//        tmp10 -= 3;
//        tmp5++;
//        tmp25++;
//    }
//    if (tmp25 >= 2)
//    {
//        result++;
//        tmp50++;
//        tmp25 -= 2;
//    }
//}

#include <iostream>
using namespace std;
int GetResult(int n)
{
    //50-cent, 25-cent, 10-cent, 5-cent, and 1-cent
    int total = n;
    int c50, c25, c10, c5,c1;
    c50 = n / 50;
    c25 = n / 25;
    c10 = n / 10;
    c5 = n / 5;
    c1 = n;
    int result = 0;
    for (int a = 0; a <= c50; a++)
        for (int b = 0; b <= c25; b++)
            for (int c = 0; c <= c10; c++)
                for (int d = 0; d <= c5; d++)
                    for (int e = 0; e <= c1; e++)
                        if (e + d * 5 + c * 10 + b * 25 + a * 50 == total&&(a+b+c+d+e<=100))
                        {
                            result++;
                            break;
                        }
    return result;
}
int main()
{
    int n,coins,count=0;
    cin >> n;
    while (n--)
    {
        cin >> coins;
        cout << GetResult(coins) << endl;
    }
    return 0;
}

//#include <iostream>
//using namespace std;
//int main()
//{
//    int n, m, a = 0, i, j, count = 0;
//    while (cin >> n >> m)
//    {
//        count = 0;
//        for (i = n; i <= m; ++i)
//        {
//            bool s = true;
//            for (j = 2; j <= i - 1; j++)
//            {
//                if (i >= 4 && i % j == 0)
//                {
//                    s = false;
//                    break;
//                }
//                else if (i == 1)
//                    s = false;
//            }
//            if (s)count++;
//
//        }         cout << count << endl;
//    }
//    return 0;
//}

