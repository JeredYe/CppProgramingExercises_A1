// 骑士斗恶龙.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
void Sort(int Arr[], int Size)
{
    for (int i = 0; i < Size; i++)
        for (int j = 1; j <= Size - i; j++)
            if (Arr[j - 1] > Arr[j])
            {
                int buf = Arr[j - 1];
                Arr[j - 1] = Arr[j];
                Arr[j] = buf;
            }
}
int Heads[20000] = { 0 }, Worriers[20000] = { 0 };
int main()
{
    int n,m;
    while (cin >> n >> m)
    {
        for (int i = 0; i < n; i++)
            cin >> Heads[i];
        Sort(Heads, n-1);
        for (int i = 0; i < m; i++)
            cin >> Worriers[i];
        Sort(Worriers, m-1);
        int count = 0;
        bool Win = false;
        for (int i = 0; i < n; i++)
        {
            Win = false;
            for (int j = 0; j < m; j++)
                if (Worriers[j] >= Heads[i])
                {
                    Win = true;
                    count += Worriers[j];
                    Worriers[j] = 0;//不能杀两次
                    break;
                }
            if (!Win)
            {
                cout << "Lose!" << endl;
                break;
            }
        }
        if (Win)cout << count << endl;
        for (int i = 0; i < n; i++)
            Heads[i] = 0;
        for (int i = 0; i < m; i++)
            Worriers[i] = 0;
    }

    return 0;
}