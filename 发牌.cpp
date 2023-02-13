// 发牌.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int main()
{
    int Array[4][4][13]={0};//ID TYPE NUM
    int n;
    int IDTURN = 0, NUMTURN = 0;
    for (int i = 0; i < 4; i++)
    for (int j = 0; j < 13; j++)
    {
        Array[IDTURN % 4][i][NUMTURN % 13] = 1;
        IDTURN++;
        NUMTURN++;
    }

    while (cin >> n)
    {
        for (int i = 0; i < 13; i++)
        {
            
            if (Array[n - 1][0][i] != 0)
            {
                
                cout << "c " << i;
                if (i <= 12)cout << " ";
            }

        }
        for (int i = 0; i < 13; i++)
        {
            if (Array[n - 1][1][i] != 0)
            {
                cout << "d " << i;
                if (i <= 12)cout << " ";
            }
        }
        for (int i = 0; i < 13; i++)
        {
            if (Array[n - 1][2][i] != 0)
            {
                cout << "h " << i;
                if (i <= 12)cout << " ";
            }
        }
        bool SPACE = false;
        for (int i = 0; i < 13; i++)
        {
            if (Array[n - 1][3][i] != 0)
            {
                if (SPACE)cout << " ";
                cout << "s " << i;
                SPACE = true;
            }
        }
        cout << endl;
    }
    return 0;
}
