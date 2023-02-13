// Factor.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int main()
{
    int n;
    while (cin >> n)
    {
        int sum = 0;
        for (int i = 2; i <= 11; i++)
        {
            bool Prime = true;
            for (int j = 2; j <= i; j++)
                if (j != i && i % j == 0)
                {
                    Prime = !Prime;
                    break;
                }
            if (Prime && n % i == 0)sum += i;
        }
        cout << sum << endl;

    }
    return 0;
}
