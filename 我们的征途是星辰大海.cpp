// 我们的征途是星辰大海.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int N;
        cin >> N;
        int sx = 0, sy = 0, tx = 0, ty = 0;
        char map[55][55] = { 0 };
        for (int i = 0; i < N; i++)
            cin >> map[i];
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++)
            {
                if (map[i][j] == 'S')
                {
                    sx = j;
                    sy = i;
                }
                if (map[i][j] == 'T')
                {
                    tx = j;
                    ty = i;
                }
            }
        int Q = 0;
        cin >> Q;
        int SX = sx, SY = sy;
        while (Q--)
        {
            sx = SX;
            sy = SY;
            char command[32] = { 0 };
            cin >> command;
            bool exit = false;
            for (int i = 0; i < strlen(command); i++)
            {
                switch (command[i])
                {
                case 'L':
                    sx--;
                    if (sx < 0)
                    {
                        cout << "I am out!" << endl;
                        exit = true;
                    }
                    break;
                case 'R':
                    sx++;
                    if (sx >= N)
                    {
                        cout << "I am out!" << endl;
                        exit = true;
                    }
                    break;
                case 'U':
                    sy--;
                    if (sy<0)
                    {
                        cout << "I am out!" << endl;
                        exit = true;
                    }
                    break;
                case 'D':
                    sy++;
                    if (sy >= N)
                    {
                        cout << "I am out!" << endl;
                        exit = true;
                    }
                    break;
                }
                if(!exit)
                switch (map[sy][sx])
                {
                case '#':
                    cout << "I am dizzy!" << endl;
                    exit = true;
                    break;
                case 'T':
                    cout << "I get there!" << endl;
                    exit = true;
                    break;
                }
                if (exit)break;
            }
            if (!exit)cout << "I have no idea!" << endl;
        }
                
    }
    return 0;
}
