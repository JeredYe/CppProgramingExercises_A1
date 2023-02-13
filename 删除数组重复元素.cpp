// 删除数组重复元素.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int main()
{
    int n;
    while (cin >> n)
    {
        int ArrayO[100] = { 0 }, Array[100] = { 0 };
        for (int i = 0; i < n; i++)
        {
            cin >> ArrayO[i];
            Array[i] = ArrayO[i];
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            count = 0;
            for (int j = 0; j < n; j++)
            {
                if (Array[j] == ArrayO[i])count++;
                if (count > 1)
                {
                    Array[j] = -1;
                    count = 0;
                }
            }
        }
        cout << Array[0];
        for (int i = 1; i < n; i++)if (Array[i] >= 0)cout << " " << Array[i];
        cout << endl;
    }
    return 0;
}
