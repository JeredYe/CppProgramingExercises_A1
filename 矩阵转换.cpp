// 矩阵转换.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int main()
{
    int r;
    while (cin >> r)
    {
        int ArrO[20][20] = { 0 };
        for (int i = 0; i < r; i++)
            for (int j = 0; j < r; j++)
                cin >> ArrO[i][j];
        for (int i = 0; i < r; i++)
            for (int j = 0; j < r; j++)
                cout<<ArrO[j][i]<<(j==r-1?"\n":" ");
        cout << endl;
    }
    return 0;
}

