// 扑克牌.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
void Swap(char A[2], char B[2])
{
    char buf[2] = { A[0],A[1] };
    A[0] = B[0]; A[1] = B[1];
    B[0] = buf[0]; B[1] = buf[1];
}
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        for (int a = 0; a < 4; a++)
        {
            char Arr[13][3] = { 0 };
            for (int i = 0; i < 13; i++)
            {
                cin >> Arr[i];
                switch (Arr[i][0])
                {
                case 'S':Arr[i][0] = 4; break;
                case 'H':Arr[i][0] = 3; break;
                case 'D':Arr[i][0] = 2; break;
                case 'C':Arr[i][0] = 1; break;
                }
                switch (Arr[i][1])
                {
                case 'A':Arr[i][1] = 14; break;
                case 'K':Arr[i][1] = 13; break;
                case 'Q':Arr[i][1] = 12; break;
                case 'J':Arr[i][1] = 11; break;
                case 'T':Arr[i][1] = 10; break;
                default:Arr[i][1] -= '0'; break;
                }
            }
            for (int i = 0; i < 13; i++)
                for (int j = 1; j < 13; j++)
                    if (Arr[j - 1][1] < Arr[j][1]|| Arr[j - 1][1] == Arr[j][1]&& Arr[j - 1][0] < Arr[j][0])Swap(Arr[j - 1], Arr[j]);
            for (int i = 0; i < 13; i++)
            {
                switch (Arr[i][0])
                {
                case 4:Arr[i][0] = 'S'; break;
                case 3:Arr[i][0] = 'H'; break;
                case 2:Arr[i][0] = 'D'; break;
                case 1:Arr[i][0] = 'C'; break;
                }
                switch (Arr[i][1])
                {
                case 14:Arr[i][1] = 'A'; break;
                case 13:Arr[i][1] = 'K'; break;
                case 12:Arr[i][1] = 'Q'; break;
                case 11:Arr[i][1] = 'J'; break;
                case 10:Arr[i][1] = 'T'; break;
                default:Arr[i][1] += '0'; break;
                }
                cout << (i ? " " : "") << Arr[i];
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
