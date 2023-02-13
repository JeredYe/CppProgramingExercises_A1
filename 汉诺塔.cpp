// 汉诺塔.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
void Move(int n, char A, char B, char C)
{
    if (n == 1)
    {
        cout << A << "----" << C << endl;
    }
    else
    {
        Move(n - 1, A, C, B);
        cout<< A << "----" << C << endl;
        Move(n - 1, B, A, C);
    }
}


int main()
{
    int n;
    while (cin >> n)
    {
        Move(n, 'A', 'B', 'C');
        cout << endl;
    }
    return 0;
}
