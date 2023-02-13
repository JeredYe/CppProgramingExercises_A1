// 亲和数.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int getsum(int num)
{
    int sum = 0;
    for (int i = 1; i < num; i++)if (num % i == 0)sum += i;
    return sum;
}
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int A, B;
        cin >> A >> B;
        cout << (getsum(A) == B && getsum(B) == A ? "YES" : "NO") << endl;
    }
    return 0;
}
