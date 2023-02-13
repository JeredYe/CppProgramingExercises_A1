// 两只塔姆沃斯牛.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int dF = 0, dC = 0, times = 0;//0N 1E 2S 3W
int xF, yF, xC, yC;
void Move(int* x, int* y, int direction)
{
    switch (direction)
    {
    case 0:
        *y = *y - 1;
        break;
    case 1:
        *x = *x + 1;
        break;
    case 2:
        *y = *y + 1;
        break;
    case 3:
        *x = *x - 1;
        break;
    }
}
int main()
{
    char map[11][11] = { 0 };

    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++)
        {
            cin >> map[i][j];
            if (map[i][j] == 'C')xC = j, yC = i;
            if (map[i][j] == 'F')xF = j, yF = i;
        }
    while (true)
    {
        times++;
        char frontC = 0, frontF = 0;
        switch (dF)
        {
        case 0:
            if (yF != 0)frontF = map[yF - 1][xF];
            else frontF = '*';
            break;
        case 1:
            if (xF != 9)frontF = map[yF][xF + 1];
            else frontF = '*';
            break;
        case 2:
            if (yF != 9)frontF = map[yF + 1][xF];
            else frontF = '*';
            break;
        case 3:
            if (xF != 0)frontF = map[yF][xF - 1];
            else frontF = '*';
            break;
        }
        switch (dC)
        {
        case 0:
            if (yC != 0)frontC = map[yC - 1][xC];
            else frontC = '*';
            break;
        case 1:
            if (xC != 9)frontC = map[yC][xC + 1];
            else frontC = '*';
            break;
        case 2:
            if (yC != 9)frontC = map[yC + 1][xC];
            else frontC = '*';
            break;
        case 3:
            if (xC != 0)frontC = map[yC][xC - 1];
            else frontC = '*';
            break;
        }
        if (frontC == '*') { dC++; dC %= 4; }
        else Move(&xC, &yC, dC);
        if (frontF == '*') { dF++; dF %= 4; }
        else Move(&xF, &yF, dF);
        if (xC == xF && yC == yF)break;
        if (times >= 1000)
        {
            cout << 0 << endl;
            return 0;
        }
    }
    cout << times << endl;
    return 0;
}
