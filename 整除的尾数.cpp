// 整除的尾数.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int main()
{
    int n, a, b;
    cin >> n;
    while (n--)
    {
        cin >> a >> b;
        a *= 100;
        int count = 0;
        for (int i = 0; i <= 99; i++)
        {
            int num = a + i;
            if (!(num % b))
            {
                if (count++ != 0)cout << " ";
                cout << i;
            }
        }
        cout << endl;
    }
    return 0;
}

