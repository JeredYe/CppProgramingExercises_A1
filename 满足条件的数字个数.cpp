// 满足条件的数字个数.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int n,Count;
    while (cin >> n)
    {
        Count = 0;
        for (int i = 1; i < n + 1; i++)
        {
            char buffer[5];
            if (i % 3 == 0)
            {
                sprintf_s(buffer, "%d", i);
                for (int j = 0; j < 5; j++)if (buffer[j] == '5')
                {
                    Count++;
                    break;
                }
            }
        }
        cout << Count << endl;
    }
    return 0;
}