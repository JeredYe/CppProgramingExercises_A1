// 数的整除.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
string dic = "123456789";
bool Selected[10] = { 0 };
char tmp[11] = { 0 };
int countN = 0;
vector <string> arrangement;
int n, t = 0;
void dfs()
{
    if (countN == 9)
    {
        int t1 = (tmp[0] - '0') * 100 + (tmp[1] - '0') * 10 + (tmp[2] - '0');
        int t2 = (tmp[3] - '0') * 100 + (tmp[4] - '0') * 10 + (tmp[5] - '0');
        int t3 = (tmp[6] - '0') * 100 + (tmp[7] - '0') * 10 + (tmp[8] - '0');
        if (!(t2 % t1) && !(t3 % t1))
        {
            string tmps(tmp);
            tmps.insert(6, " ");
            tmps.insert(3, " ");
            arrangement.push_back(tmps);
            t++;
        }
    }
    if (t >= n)return;
    for (int i = 0; i < 9; i++)
    {
        if (!Selected[i])
        {
            tmp[countN++] = dic[i];
            Selected[i] = true;
            dfs();
            Selected[i] = false;
            tmp[--countN] = 0;
        }
    }
}
int main()
{
    while (cin >> n)
    {
        countN = 0;
        arrangement.clear();
        n, t = 0;
        dfs();
        cout << arrangement[n - 1] << endl;
    }
    return 0;
}
