// 混合牛奶.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int main()
{
    int N, M;
    cin >> N >> M;
    int Price[256] = { 0 }, Amount[256] = { 0 };
    for (int i = 0; i < M; i++)cin >> Price[i] >> Amount[i];
    for (int i = 0; i < M; i++)
        for (int j = 1; j < M; j++)
            if (Price[j - 1] > Price[j])
            {
                int t1 = Price[j - 1], t2 = Amount[j - 1];
                Price[j - 1] = Price[j];
                Amount[j - 1] = Amount[j];
                Price[j] = t1;
                Amount[j] = t2;
            }
    int total = 0, sum = 0;
    for (int i = 0; i < M; i++)
    {

        if (sum + Amount[i] <= N)
        {
            sum += Amount[i];
            total += Amount[i] * Price[i];
        }
        else
        {
            total += (N - sum) * Price[i];
            break;
        }
            
    }
    cout << total << endl;
    return 0;
}
