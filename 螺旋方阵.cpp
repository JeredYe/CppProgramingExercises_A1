// 螺旋方阵.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int matrix[200][200] = { 0 };
int main()
{
    int n;
    while (cin >> n)
    {
        int direction = 0;//0S 1E 2N 3W
        int leftb = 0, rightb = n, downb = n, upb = 0;
        int count = 1;
        while (count <= n * n)
        {
            switch (direction)
            {
            case 0:
                for (int i = leftb; i < rightb; i++)
                {
                    matrix[upb][i] = count;
                    count++;
                }
                upb++;
                direction++;
                break;
            case 1:
                for (int i = upb; i < downb; i++)
                {
                    matrix[i][rightb - 1] = count;
                    count++;
                }
                rightb--;
                direction++;
                break;
            case 2:
                for (int i = rightb - 1; i >= leftb; i--)
                {
                    matrix[downb - 1][i] = count;
                    count++;
                }
                downb--;
                direction++;
                break;
            case 3:
                for (int i = downb - 1; i >= upb; i--)
                {
                    matrix[i][leftb] = count;
                    count++;
                }
                leftb++;
                direction=0;
                break;

            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << matrix[i][0];
            for (int j = 1; j < n; j++)
                cout << " " << matrix[i][j];
            cout << endl;
        }
    }
    return 0;
}