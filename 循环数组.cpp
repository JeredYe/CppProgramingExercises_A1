// 循环数组.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int main()
{
    int n,count=0,Arr[1024]={0},N;
    cin >> n;
    while (n--)cin >> Arr[count++];
    cin >> N;
    while (N--)
    {
        int buf = Arr[count-1];
        for (int i = count - 1; i > 0; i--)Arr[i] = Arr[i - 1];
        Arr[0] = buf;
    }
    cout << Arr[0];
    for (int i = 1; i < count; i++)
        cout << " " << Arr[i];
    return 0;
}
