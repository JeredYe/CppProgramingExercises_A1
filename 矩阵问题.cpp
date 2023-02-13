// 矩阵问题.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int main()
{
    int Array[64][64] = { 0 };
    int a;/////[纵][横]
    while (cin >> a)
    {
        for (int i = 0; i < 32; i++)for (int j = 0; j < 32; j++)Array[i][j] = 0;
        int n = 2 * a + 1;
        for (int i = 0; i < n; i++)
        {
            Array[i][i] = 1;
        }
        for (int i = 0; i < n; i++)
        {
            Array[i][n-1-i] = 1;
        }
        for (int i = 0; i < a; i++)
        {
            for (int j = i + 1; j < n - (i + 1); j++)
                Array[i][j] = 2;
        }///2
        for (int i = 0; i < a; i++)
        {
            for (int j = i + 1; j < n - (i + 1); j++)
                Array[n-1-i][j] = 3;
        }///3
        for (int i = 0; i < a; i++)
        {
            for (int j = i + 1; j < n - (i + 1); j++)
                Array[j][i] = 4;
        }///4
        for (int i = 0; i < a; i++)
        {
            for (int j = i + 1; j < n - (i + 1); j++)
                Array[j][n-1-i] = 5;
        }///5

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (j != 0)cout << " ";
                cout << Array[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}