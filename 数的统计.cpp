// 数的统计.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int main()
{
    int Num[1000] = { 0 }, Times[1000] = { 0 }, count = 0;
    int n;
    cin >> n;
    while (n--)
    {
        bool New = true;
        int tmp = 0; cin >> tmp;
        for (int i = 0; i < count; i++)
            if (Num[i] == tmp)
            {
                New = false;
                Times[i]++;
                break;
            }
        if (New)
        {
            Num[count] = tmp; Times[count] = 1;
            count++;
        }
    }
    for (int i = 0; i < count; i++)
        for (int j = 1; j < count - i; j++)
            if (Num[j - 1] > Num[j])
            {
                int buf1 = Times[j - 1], buf2 = Num[j - 1];
                Times[j - 1] = Times[j];
                Times[j] = buf1;
                Num[j - 1] = Num[j];
                Num[j] = buf2;
            }
    for (int i = 0; i < count; i++)
        cout << Num[i] << " " << Times[i] << endl;
    return 0;
}
