// 多项式输出.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int n,arr[256]={0};
    cin >> n;
    for (int i = 0; i < n + 1; i++)
        cin >> arr[i];
    if (arr[0])
        if (arr[0] != -1 && arr[0] != 1)
            cout << arr[0] << "x^" << n;
        else
            cout << (arr[0] > 0 ? "" : "-") << "x^" << n;
    for (int i = 1; i < n; i++)
    {
        if (!arr[i])continue;
        cout << (arr[i] > 0 ? "+" : (arr[i]==-1?"-":""));
        if (arr[i] != 1 && arr[i] != -1)cout << arr[i];
        if (n - i != 1)
            cout << "x^" << n - i;
        else cout << "x";
    }
    if(arr[n])
        cout << (arr[n] > 0 ? "+" : "") << arr[n] << endl;
    return 0;
}
