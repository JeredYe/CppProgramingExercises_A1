// 输出米字形.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int main()
{
    char Matrix[100][100] = { 0 };
    int n;
    cin >> n;
    for (int i = 0; i < 2 * n - 1; i++)
        for (int j = 0; j < 2 * n - 1; j++)
            Matrix[i][j] = '.';
    int offset = 0;
    for (int i = 0; i < n; i++)
    {
        int space = (2 * n - 1 - 2 * offset - 3) / 2 + 1;
        for (int j = 0; j < 3; j++)
            for (int k = 0; k < 3; k++)
                Matrix[offset + j * space][offset + k * space] = 'A' + i;
        offset++;
    }
    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
            cout << Matrix[i][j];
        cout << endl;
    }
    return 0;
}
