// 区间k大数查询.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cin >> n;
    int arr[1024] = { 0 };
    for (int i = 0; i < n; i++)cin >> arr[i];
    cin >> m;
    while (m--)
    {
        int l, r, k, count = 0;
        cin >> l >> r >> k;
        int newArr[1024]={0};
        for (int i = l - 1; i <= r - 1; i++)
            newArr[count++]=arr[i];
        for (int i = 0; i < count; i++)
            for (int j = 1; j < count; j++)
                if (newArr[j - 1] < newArr[j])
                {
                    int t = newArr[j - 1];
                    newArr[j - 1] = newArr[j];
                    newArr[j] = t;
                }
        cout << newArr[k - 1] << endl;
    }
    return 0;
}

