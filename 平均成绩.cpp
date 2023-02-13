// 平均成绩.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int scores[10];
    double average=0;
    for (int i = 0; i < 10; i++)cin >> scores[i];
    for (int i = 0; i < 10; i++)average += scores[i];
    average /= 10;
    cout << fixed << setprecision(1) << average << endl;
    for (int i = 0; i < 10; i++)if (scores[i] > average)cout << scores[i] << " ";
    cout << endl;
    return 0;
}
