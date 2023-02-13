// 回形取数.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int matrix[200][200] = { 0 };
int main()
{
    int m, n;
    cin >> m >> n;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> matrix[i][j];
    int direction = 0;//0S 1E 2N 3W
    int leftb = 0, rightb = n, downb = m, upb = 0;
    int count = 0;
    while (count < m * n)
    {
        switch(direction)
        {
        case 0:
            for (int i = upb; i < downb; i++)
            {
                if(i||leftb)
                cout <<" " << matrix[i][leftb];
                else cout << matrix[i][leftb];
                count++;
            }
            leftb++;
            direction++;
            break;
        case 1:
            for (int i = leftb; i < rightb; i++)
            {
                cout << " " << matrix[downb - 1][i];
                count++;
            }
            downb--;
            direction++;
            break;
        case 2:
            for (int i = downb - 1; i >= upb; i--)
            {
                cout << " " << matrix[i][rightb - 1];
                count++;
            }
            rightb--;
            direction++;
            break;
        case 3:
            for (int i = rightb - 1; i >= leftb; i--)
            {
                cout << " " << matrix[upb][i];
                count++;
            }
            upb++;
            direction = 0;
            break;
        }
    }
    return 0;
}
