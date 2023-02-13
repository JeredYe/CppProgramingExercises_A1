// 最大值.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int main()
{
    int n, l1, l2;
    while (cin >> n >> l1 >> l2)
    {
        int a = 0,Array[256]={0};
        while (n--)cin >> Array[a++];
        for (int i = 0; i < a; i++)
            for (int j = 1; j < a - i; j++)
                if (Array[j - 1] > Array[j])
                {
                    int buf = Array[j - 1];
                    Array[j - 1] = Array[j];
                    Array[j] = buf;
                }
        int max = -65535;
        for (int i = l1; i <= l2; i++)
            for (int m = 0; m <= a - i; m++)
            {
                int sum = 0;
                for (int j = 0; j < i; j++)
                {
                    if (i == 1) {sum = Array[m + j]; break;}
                    else if (Array[m + j] + 1 == Array[m + j + 1])sum += Array[m + j];
                    else if ((m > 0 || j > 0) && Array[m + j - 1] + 1 == Array[m + j])sum += Array[m + j];
                }
                max = (sum > max ? sum : max);
            }
        cout << max << endl;
    }
    return 0;
}
