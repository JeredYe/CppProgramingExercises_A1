// 数字游戏.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int main()
{
    int n, k, T;
    
    while (cin >> n>>k>>T)
    {
        //int CurrentAdd = 0;
        //    for (int i = 0; i < T; i++)
        //    {
        //        for (int j = 0; j < n; j++)
        //        {
        //            Current += CurrentAdd++;
        //            Current %= k;
        //            if (j == 0)Amount += Current;
        //        }
        //    }
        unsigned long long Current = 1;
        unsigned long long Start = 0, End = n - 1;
        unsigned long long Amount = 0;
            for (int i = 0; i < T; i++)
            {
                Current += Start;
                if (Current >= k - 1)Current %= k;
                Amount += Current;
                Current += (Start + 1 + End) * (n - 1) / 2;
                if (Current >= k - 1)Current %= k;
                Start += n;
                End += n;
            }

            cout << Amount<<endl;
    }
    return 0;
}
////TLE