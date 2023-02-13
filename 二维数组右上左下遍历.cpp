// 二维数组右上左下遍历.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int main()
{
    int row, col;
    int Array[100][100];
    for (int i = 0; i < 100; i++)
        for (int j = 0; j < 100; j++)Array[i][j] = -1;
    cin >> row>> col;///3vert 4horiz
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            cin >> Array[i][j];

    for (int i = 0; i < col+row-1; i++)
    {
        for (int j = 0; j <=i; j++)
            if (Array[j][i - j] != -1)cout << Array[j][i - j] << " ";
    }
    cout << endl;
    return 0;
}

