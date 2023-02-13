// 按要求输出序列.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int main()
{
    int n;
    while (cin >> n)
    {
        int ArrayO[256] = { -1 }, Array[256] = { -1 };
        int Count = n;
        int zero = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> ArrayO[i];
            if (ArrayO[i] == 0)zero++;
            Array[i] = ArrayO[i];
        }
        for (int i = 0; i < n; i++)
        {
            int count = 0;
            for (int j = 0; j < n; j++)
            {
                if (Array[j] == ArrayO[i]&& Array[j]!=-1)count++;
                
                if (count > 1)
                {
                    ArrayO[i] = -1;
                    Count--;
                    for (int m = j; m < n; m++)
                    {
                        Array[m] = Array[m + 1];
                    }
                    count = 0;
                }
            }
        }
        for (int i = 0; i < Count+ zero; i++)
            for (int j = 1; j < Count - i+ zero; j++)
                if (Array[j-1] > Array[j])
                {
                    int buf = Array[j-1];
                    Array[j-1] = Array[j];
                    Array[j] = buf;
                }
        cout << Array[0];
        for (int i = 1; i < Count + zero; i++)cout << " " << Array[i];
        cout << endl;
    }
}

