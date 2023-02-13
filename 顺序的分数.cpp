// 顺序的分数.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
#define max(a,b) (a>b?a:b)
bool Judge(int a, int b)
{
    for (int i = 2; i < max(a, b); i++)
        if (!(a % i) && !(b % i))return false;
    return true;
}
int main()
{
    int N;
    cin >> N;
    cout << "0/1" << endl;
    int count = 0, arr1[256] = { 0 }, arr2[256] = { 0 };
    for (int i = 1; i <= N - 1; i++)
        for (int j = N; j >= 2; j--)
            if (Judge(i, j) && j > i)
            {
                arr1[count] = i;
                arr2[count++] = j;
            }
    for (int i = 0; i < count; i++)
        for (int j = 1; j < count; j++)
            if ((double)arr2[j - 1] / arr1[j - 1] < (double)arr2[j] / arr1[j])
            {
                int t1 = arr2[j - 1], t2 = arr1[j - 1];

                arr2[j - 1] = arr2[j];
                arr1[j - 1] = arr1[j];
                arr2[j] = t1;
                arr1[j] = t2;
            }
    for (int i = 0; i < count; i++)cout << arr1[i] << "/" << arr2[i] << endl;
    return 0;
}
