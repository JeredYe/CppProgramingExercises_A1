// 排序.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
void swap(int* a, int* b)
{
    int buf=*a;
    a = b;
    b = &buf;
}
int main()
{
    int n,Array[10];
    cin >> n;
    while (n--)
    {
        for (int i = 0; i < 10; i++)cin >> Array[i];
        
        for (int i = 0; i < 10; i++)
        {
            int *min = &Array[i];
            for (int j = i; j < 10; j++)
            {
                if (*min > Array[j])swap(*min, Array[j]);
            }
        }
        cout << Array[0];
        for (int j = 1; j < 10; j++)cout << " " << Array[j];
        cout << endl;
    }
    return 0;
}
