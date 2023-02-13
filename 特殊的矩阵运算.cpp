// 特殊的矩阵运算.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int main()
{
    int m, n, Array[10][10] = { 0 }, multi = 0,divided = 0;
    cin >> m;
    cin >> n;
    for (int a = 0; a < m; a++)
    {
        divided = 0;
        multi = 0;
        for (int i = 0; i < 10; i++)for (int j = 0; j < 10; j++)Array[i][j] = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> Array[i][j];
            }
        }
        for (int i = 0; i < n; i++)
        {
            multi += Array[i][i] * Array[n - 1 - i][i];
            divided += (Array[i][i]) / Array[n - 1 - i][i];
        }
        cout << multi << " " << divided << endl;
    }
    return 0;
}
