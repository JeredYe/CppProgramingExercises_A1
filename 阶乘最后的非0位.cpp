// 阶乘最后的非0位.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;
int len = 1;
void Multi(unsigned __int64 Array[], int num)
{
    bool Add = false;
    for (int i = len-1; i >=0; i--)
    {

        Array[i] *= num;
        if (Array[i] >= 1000000000)
        {
            if (Array[i + 1] == 0)Add = true;
            Array[i + 1] += Array[i] / 1000000000;
            Array[i] %= 1000000000;
        }
    }
    if (Add)len++;

    //for (int i = len - 1; i >= 0; i--)
    //{
    //    if (i != len - 1)cout << setw(10);
    //    cout << Array[i] << endl;
    //}
    //cout << "now" << num << endl;
}
int main()
{
    unsigned __int64 Arr[200] = { 0 };
    Arr[0] = 1;
    int n;
    cin >> n;
    //Arr[0] = 4; Arr[1] = 2; 
    //Multi(Arr, 5);

    for (int i = 1; i < n+1; i++)
    {
        Multi(Arr, i);

    }
    while (Arr[0] == 0)
    {
        len--;
        for (int i = 0; i < len; i++)Arr[i] = Arr[i + 1];
    }
    while (Arr[0] % 10 == 0)Arr[0] /= 10;
    cout << Arr[0] % 10 << endl;
    //for (int i = len - 1; i >= 0; i--)
    //{
    //    
    //    printf("%010d", Arr[i]);
    //}
//    cout << endl;
    return 0;
}
