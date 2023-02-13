// 王、后传说.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//


//for (int i = 1; i <= n; i++)
//{
//    for (int j = 1; j <= n; j++)
//        cout << matrix[i][j];
//    cout << endl;
//}
//cout << endl;
//getchar();

//bool Compare()
//{
//    for (int a = 0; a < t; a++)
//    {
//        bool same = true;
//        for (int i = 1; i <= n; i++)
//        {
//            for (int j = 1; j <= n; j++)
//                if (matrix[i][j] != Conditions[a][i][j])
//                {
//                    same = false;
//                    break;
//                }
//            if (!same)break;
//        }
//        if (same)return false;
//    }
//    return true;
//}

//int sx = 0, sy = 0, sx2 = 0, sy2 = 0;
//if (x >= y)
//{
//    sy = 1;
//    sx = x - y + 1;
//}
//else
//{
//    sx = 1;
//    sy = y - x + 1;
//}
//sx2 = x + y - 1;
//sy2 = 1;
//for (int i = 0; i <= n; i++)
//if (matrix[sy + i][sx + i] == 2)
//return false;
//for (int i = 0; sx2 - i >= 1 && sy2 + i <= n; i++)
//if (matrix[sy2 + i][sx2 - i] == 2)return false;






#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int matrix[15][15] = { 0 };
//int  Conditions[256][15][15];
int n, X, Y;
int t = 0;
int queenamount = 0;
bool R[2][32] = { 0 };
bool isAvailable(int x, int y)
{
    if (matrix[y][x] == 0)return false;
    for (int i = 1; i <= n; i++)
        if (matrix[i][x] == 2 || matrix[y][i] == 2)return false;
    if (R[0][abs(y + n - x)] || R[1][abs(y + x - 1)])return false;

    return true;
}
void dfs(int line)
{
    if (line > n)
    {
        //for (int i = 1; i <= n; i++)
        //    for (int j = 1; j <= n; j++)
        //        Conditions[t][i][j] = matrix[i][j];
            t++;
            return;
    }
    for (int j = 1; j <= n; j++)
    {
        if (isAvailable(j, line))
        {
            matrix[line][j] = 2;
            R[0][abs(line + n - j)] = true;
            R[1][abs(line + j - 1)] = true;
            dfs(line + 1);
            R[0][abs(line + n - j)] = false;
            R[1][abs(line + j - 1)] = false;
            matrix[line][j] = 1;
        }
    }
}
int main()
{
    cin >> n >> X >> Y;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            matrix[i][j] = 1;
    for (int i = Y - 1; i <= Y + 1; i++)
        for (int j = X - 1; j <= X + 1; j++)
            matrix[i][j] = 0;
    dfs(1);
    cout << t << endl;
    return 0;
}




//#include<iostream>
//#include<cstring>
//using namespace std;
//
//int n, x, y, cnt = 0, map[13][13];
//#define gru 0//国王领域
//
//int check(int p, int q)
//{
//    int i, j;
//    for (i = p - 1, j = q - 1; i >= 1 && j >= 1; i--, j--)//左对角线
//        if (map[i][j] == 2)
//            return 0;
//
//    for (i = p - 1, j = q + 1; i >= 1 && j <= n; i--, j++)//右对角线
//        if (map[i][j] == 2)
//            return 0;
//
//    for (i = p - 1, j = q; i >= 1; i--)//直着的
//        if (map[i][j] == 2)
//            return 0;
//
//    return 1;
//}
//
//void dfs(int c)
//{
//    if (c > n)
//    {
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j < n; j++)
//                cout << map[i][j];
//            cout << endl;
//        }
//        cout << cnt + 1 << endl << endl;
//        cnt++;
//        return;
//    }
//    int i;
//    for (i = 1; i <= n; i++)
//    {
//        if (map[c][i] == gru)
//            continue;
//        if (check(c, i))
//        {
//            map[c][i] = 2;
//            dfs(c + 1);
//            map[c][i] = 1;
//        }
//    }
//}
//
//int main()
//{
//    cin >> n >> x >> y;
//    memset(map, 0, sizeof(map));//初始化map数组
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = 1; j <= n; j++)
//        {
//            map[i][j] = 1;
//        }
//    }
//    int i, j;
//    for (i = x - 1; i <= x + 1; i++)
//        for (j = y - 1; j <= y + 1; j++)
//            map[i][j] = gru;//标记为0的是国王的地盘
//
//    dfs(1);
//    cout << cnt << endl;
//    return 0;
//}