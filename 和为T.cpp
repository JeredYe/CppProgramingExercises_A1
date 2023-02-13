// 和为T.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;
int dic[256] = { 0 };
bool selected[256] = { 0 };
int temp[256] = { 0 };
int countN = 0;
int target = 0;
int n,times = 0;
vector <string> solutions;
int sum()
{
    int t = 0;
    for (int i = 0; i < countN; i++)
        t += temp[i];
    return t;
}
void dfs(int start)
{
    if (countN && sum() == target)
    {
        string tmp;
        for (int i = 0; i < countN; i++)
        {
            tmp.append(to_string(temp[i]));
            tmp.append(" ");
        }
        solutions.push_back(tmp);
        times++;
    }

    for (int i = start; i < n; i++)
    {
        if (!selected[i])
        {
            temp[countN++] = dic[i];
            selected[i] = true;
            dfs(i);
            selected[i] = false;
            temp[--countN] = 0;
        }
    }

}
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)cin >> dic[i];
    cin >> target;
    dfs(0);
    for (int i = times - 1; i >= 0; i--)
        cout << solutions[i] << endl;
    cout << times << endl;
    return 0;
}