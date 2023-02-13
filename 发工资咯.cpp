// 发工资咯.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a,Arr[255]={0},b=0;
        cin >> a;
        while (a--)cin >> Arr[b++];
        int sum = 0;
        for (int i = 0; i < b; i++)
        {
            sum+=Arr[i] / 100;
            Arr[i] %= 100;
            sum += Arr[i] / 50;
            Arr[i] %= 50;
            sum += Arr[i] / 20;
            Arr[i] %= 20;
            sum += Arr[i] / 10;
            Arr[i] %= 10;
            sum += Arr[i] / 5;
            Arr[i] %= 5;
            sum += Arr[i] / 2;
            Arr[i] %= 2;
            sum += Arr[i];
        }
        cout << sum << endl;
    }
    return 0;
}
