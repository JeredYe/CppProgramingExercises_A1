// 反置数.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int pow(int a,int b)
{
    int result = 1;
    while (b--)result *= a;
    return result;
}
int reverse(int a)
{
    int count = 0, array[6] = { 0 };
    while (6-count)
    {
        array[count] = a / pow(10,5-count);
        a %= pow(10, 5 - count);
        count++;
    }
    int result = 0,amount=0;
    for (int i = 0; i < 6; i++)if (array[i])result += array[i]*pow(10, amount++);
    return result;
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << reverse(reverse(a) + reverse(b)) << endl;
    return 0;
}
