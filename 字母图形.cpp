// 字母图形.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#define max(a,b) (a>b?a:b)
using namespace std;
int main()
{
    char Array[27][27] = { 0 };
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < max(m,n); i++)
        for (int j = 0; j < max(m, n); j++)
        {
            Array[i][j + i] = 'A' + j;
            if (i - j >= 0)
                Array[i][i - j] = 'A' + j;
        }
    //for (int i = 0; i < n; i++)
    //    for (int j = 0; j < m; j++)
    //    {
    //        Array[i][j + i] = 'A' + j;
    //        if (i - j >= 0)
    //            Array[i][i - j] = 'A' + j;
    //    }
    //每周一虫：因为m有时小于n，所以易导致生成的字符画产生空缺



    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << Array[i][j];
        cout << endl;
    }
    return 0;
}
