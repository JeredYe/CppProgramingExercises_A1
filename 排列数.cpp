// 排列数.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;
string dic = "0123456789";
bool Selected[10] = { 0 };
char tmp[11] = { 0 };
int countN = 0;
vector <string> arrangement;
int n, t = 0;
void dfs()
{
    if (countN == 10)
    {
        string a(tmp);
        arrangement.push_back(a);
        t++;
    }
    if (t >= n)return;
    for (int i = 0; i < 10; i++)
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
    cin >> n;
    if (n >= 1814400) {
        n = 3628800 - n + 1; dic = "9876543210";
    }
    dfs();
    cout << arrangement[n - 1] << endl;
    return 0;
}
