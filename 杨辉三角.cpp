// 杨辉三角.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int main()
{
    int n,val;
    int Array[50][50]={0};
    cin >> (n);
    for (int i = 0; i < n; i++)
    {
        Array[0][0] = 1;
        Array[1][0] = 1;
        Array[1][1] = 1;
        cin >> val;
        for (int i = 0; i < val; i++)
        {
            if (i != 0 && i != 1)
            {
                for (int j = 0; j < i+1; j++)
                {
                    if (j == 0)Array[i][j] = 1;
                    else
                    {
                        Array[i][j] = Array[i - 1][j - 1] + Array[i - 1][j];
                    }
                }
            }
        }
        for (int i = 0; i < val; i++)
        {
            for (int j = 0; j < i+1; j++)
            {
                if (Array[i][j] != 0)
                {
                    if (j != 0)cout << " ";
                    cout << Array[i][j];
                }
            }
            cout << endl;
        }
        cout << endl;
        for (int i = 0; i < 50; i++) for (int j = 0; j < 50; j++)Array[i][j] = 0;
    }
    return 0;
}
