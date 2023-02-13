// 表格问题.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int main()
{
    int n;
    int Arr[5][2][3] = { 0 };
    for (int i = 0; i < 5; i++)
    {
        Arr[i][0][0] = 1;
        Arr[i][1][2] = 6;
    }
    int* u1, * u2, * d1, * d2;
    for (int i = 0; i < 5; i++)
    {
        u1 = &Arr[i][0][1];
        u2 = &Arr[i][0][2];
        d1 = &Arr[i][1][0];
        d2 = &Arr[i][1][1];
        switch (i)
        {
        case 0: *u1 = 2; *u2 = 3; *d1 = 4; *d2 = 5; break;
        case 1: *u1 = 2; *u2 = 4; *d1 = 3; *d2 = 5; break;
        case 2: *u1 = 2; *u2 = 5; *d1 = 3; *d2 = 4; break;
        case 3: *u1 = 3; *u2 = 4; *d1 = 2; *d2 = 5; break;
        case 4: *u1 = 3; *u2 = 5; *d1 = 2; *d2 = 4; break;
        case 5: *u1 = 4; *u2 = 5; *d1 = 2; *d2 = 3; break;
        }


    }
    while (cin >> n)
    {
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << Arr[n - 1][i][j] << (j!=2? " ":"\n");
            }
        }
    }
    return 0;
}

