// 调换数组最大最小.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int FindMax(int score[], int n)
{
    int result=0;
    for (int i = 0; i < n; i++)result = (score[result] < score[i] ? i : result);
    return result;
}

int FindMin(int score[], int n)
{
    int result = 0;
    for (int i = 0; i < n; i++)result = (score[result] > score[i] ? i : result);
    return result;
}
int main()
{
    int n;
    cin >> n;
    int Array[40] = { 0 };
    for(int i=0;i<n;i++)
    {
        cin >> Array[i];
    }
    int Min = FindMin(Array, n), Max = FindMax(Array, n),buf;
    buf = Array[Min];
    Array[Min] = Array[Max];
    Array[Max] = buf;
    cout << Array[0];

    for (int j = 1; j < n; j++)

        cout << " " << Array[j];
    return 0;
}
