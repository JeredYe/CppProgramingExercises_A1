// 最大效益.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

//#include <iostream>
//using namespace std;
//int main()
//{
//    while (true)
//    {
//        int matrix[5][5] = { 0 };
//        for (int i = 0; i < 5; i++)
//            for (int j = 0; j < 5; j++)
//                if (!(cin >> matrix[i][j]))return 0;
//        int a1 = 0, b1 = 0, c1 = 0, d1 = 0, e1 = 0, sum = 0;
//        int a = 0, b = 1, c = 2, d = 3, e = 4;
//        for (a = 0; a < 5; a++)
//        {
//            if (a != b && a != c && a != d && a != e)
//                a1 = matrix[0][a];
//            else continue;
//            for (b = 0; b < 5; b++)
//            {
//                if (b != a && b != c && b != d && b != e)
//                    b1 = matrix[1][b];
//                else continue;
//                for (c = 0; c < 5; c++)
//                {
//                    if (c != b && c != a && c != d && c != e)
//                        c1 = matrix[2][c];
//                    else continue;
//                    for (d = 0; d < 5; d++)
//                    {
//                        if (d != c && d != b && d != a && d != e)
//                            d1 = matrix[3][d];
//                        else continue;
//                        for (e = 0; e < 5; e++)
//                        {
//                            if (e != d && e != c && e != b && e != a)
//                                e1 = matrix[4][e];
//                            else continue;
//                            int t = a1 + b1 + c1 + d1 + e1;
//                            sum = (sum < t ? t : sum);
//                        }
//                    }
//
//                }
//
//            }
//
//        }
//        cout << sum << endl;
//    }
//    return 0;
//}
///暴力枚举法


#include <iostream>
using namespace std;
int matrix[5][5] = { 0 };
bool Selected[2][5] = { 0 };
int Arrange[5] = { 0 };
int countN = 0, maxN = 0;
void dfs()
{
    if (countN == 5)
    {
        int t = Arrange[0] + Arrange[1] + Arrange[2] + Arrange[3] + Arrange[4];
        maxN = (t > maxN ? t : maxN);
    }
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
        {
            if (!Selected[0][j] && !Selected[1][i])
            {
                Arrange[countN++] = matrix[i][j];
                Selected[0][j] = Selected[1][i] = true;
                dfs();
                Selected[0][j] = Selected[1][i] = false;
                Arrange[--countN] = 0;
            }
        }
}
int main()
{
    while (true)
    {
        maxN = 0;
        for (int i = 0; i < 5; i++)
            for (int j = 0; j < 5; j++)
                if (!(cin >> matrix[i][j]))return 0;
        dfs();
        cout << maxN << endl;
    }
    return 0;
}
///递归方法