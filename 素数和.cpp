// 素数和.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n,num;
    int Count = 1;

    int result = 2;
    bool Pr = false;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int Array[256] = { 0 };
        Array[0] = 2;
        cin >> num;
        for (int j = 3; j < num+1; j++)
        {
            Pr = true;
            for (int m = 0; m < Count; m++)
            {
                if (j % Array[m] == 0)
                {
                    Pr = false;
                    break;
                }
            }
            if (Pr)
            {
                Array[Count] = j;
                result += j;
                Count++;
            }
        }
        cout << result<<endl;
        result = 2;
        Count = 1;
    }
    return 0;
}