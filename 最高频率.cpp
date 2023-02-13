// 最高频率.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int main()
{
    int  n = 0;
    while (cin >> n)
    {
        int a = 0;
        int Array[256] = { 0 };
        while (n--)cin >> Array[a++];
        int Same[256] = { 0 }, Times[256] = { 0 }, amount = 0;
        for (int i = 0; i < a; i++)
        {
            bool New = true;
            for (int j = 0; j < amount; j++)
                if (Array[i] == Same[j])
                {
                    Times[j]++;
                    New = false;
                }
            if (New)
            {
                Same[amount] = Array[i];
                Times[amount++] = 1;
            }
        }
        for (int i = 0; i < a; i++)
            for (int j = 1; j < a - i; j++)
            {
                if (Times[j - 1] < Times[j])
                {
                    int buf1 = Times[j - 1], buf2 = Same[j - 1];
                    Times[j - 1] = Times[j];
                    Same[j - 1] = Same[j];
                    Times[j] = buf1;
                    Same[j] = buf2;
                }
            }
        int samenum = 1;
        for (int i = 0; i < a; i++)
            if (Times[i] == Times[i + 1])samenum++;
            else break;
        int min = Same[0];
        for (int i = 0; i < samenum; i++)
        {
            min = (min > Same[i] ? Same[i] : min);
        }
        cout << min << endl;
    }

    return 0;
}
