// 8皇后·改.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

int Arrangement[8] = { 0 };
int t = 0;
int matrix[8][8] = { 0 };
bool R[2][15] = { 0 };
int maxN = 0;
bool Judge(int x,int y)
{
    for (int i = 0; i < 8; i++)
        if (matrix[y][i] == -1||matrix[i][x]==-1)return false;
    if (R[0][7 - x + y] || R[1][x + y])return false;
    return true;
}
void DFS(int line)
{
    if (t == 8)
    {
        int sum = 0;
        for (int i = 0; i < 8; i++)sum += Arrangement[i];
        maxN = (sum > maxN ? sum : maxN);
    }
    for (int i = 0; i < 8; i++)
    {
        if (Judge(i, line))
        {
            Arrangement[t] = matrix[line][i];
            t++;
            matrix[line][i] = -1;
            R[0][7 - i + line] = R[1][i + line] = true;
            DFS(line + 1);
            R[0][7 - i + line] = R[1][i + line] = false;
            matrix[line][i] = Arrangement[--t];
            Arrangement[t] = 0;
        }
        
    }
}
int main()
{
    for (int i = 0; i < 8; i++)
        for (int j = 0; j < 8; j++)
            cin >> matrix[i][j];
    DFS(0);
    cout << maxN << endl;
    return 0;
}
