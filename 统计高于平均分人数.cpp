// 统计高于平均分人数.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int main()
{
    double score[40]={0},average;
    int n = 0,count=0;
    while (true)
    {
        cin >> score[n++];
        if (score[n - 1] < 0)break;
    }
    int sum = 0;
    n--;
    for (int i = 0; i < n; i++)
    {
        sum += score[i];
    }
    average = (double)sum /n;
    while (n--)count += (score[n] > average ? 1 : 0);
    cout <<count << endl;
    return 0;
}