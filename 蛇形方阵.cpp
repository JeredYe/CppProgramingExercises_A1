// 蛇形方阵.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n,Array[256][256]={0},num=1;
    cin >> n;
    bool Reverse = true;
    for (int i = 0; i < n; i++)
    {
        Reverse = !Reverse;
        for (int j = 0; j < n; j++)
            Array[i][(Reverse?n-1-j:j)] = num++;
    }
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cout << setw(4) << Array[i][j] << (j == n - 1 ? "\n" : "");
    return 0;
}
