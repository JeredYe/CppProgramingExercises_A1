// 分糖果.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
bool Judge(int arr[], int n)
{
    int standard = arr[0];
    for (int i = 0; i < n; i++)if (standard != arr[i])return false;
    return true;
}
int main()
{
    int n;
    cin >> n;
    int arr[256] = { 0 };
    for (int i = 0; i < n; i++)cin >> arr[i];
    int bonus = 0;
    while (!Judge(arr, n))
    {
        int t = arr[0] / 2, t0 = arr[0] / 2;
        arr[0] -= t;
        for (int i = 1; i < n; i++)
        {
            t= arr[i] / 2;
            arr[i - 1] += t;
            arr[i] -=t;
        }
        arr[n - 1] += t0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2) {
                bonus++;
                arr[i]++;
            }
        }
    }
    cout << bonus << endl;
    return 0;
}
