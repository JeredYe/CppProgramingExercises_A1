// 三值的排序.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[256] = { 0 };
    for (int i = 0; i < n; i++)cin >> arr[i];
    int times = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int start = arr[i], * pmin = &arr[i];
        for (int j = i; j < n; j++)
            if (arr[j] <= *pmin)pmin = &arr[j];
        if (start > *pmin)
        {
            times++;
            arr[i] = *pmin;
            *pmin = start;
        }
    }
    cout << times << endl;
    return 0;
}
