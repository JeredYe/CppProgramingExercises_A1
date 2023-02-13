// 洗牌.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int Hand[52] = { 0 };
int Pile[52] = { 0 };
int countN = 0;
void Insert(int Card)
{
    if (Card <= countN)
    {
        for (int i = countN; i >= Card; i--)
        {
            Hand[i] = Hand[i - 1];
        }
        Hand[Card] = Card;
    }
    else
        Hand[countN] = Card;
    countN++;
}
int main()
{
    
    int i = 0;
    while(true)
    {
        char StrLine[1024];
        cin.getline(StrLine, 1024);
        bool Data = false; int TempCount = 0;
        char tmp[5] = { 0 };
        for (int j = 0; j <= strlen(StrLine); j++)
        {
            if ((j == strlen(StrLine)|| StrLine[j] == ' ')&&Data)
            {
                Data = false; TempCount = 0;
                if (tmp[0] < '0' || tmp[0] > '9')
                    switch (tmp[0])
                    {
                    case 'J':
                        Pile[i] = 11;
                        break;
                    case 'Q':
                        Pile[i] = 12;
                        break;
                    case 'K':
                        Pile[i] = 13;
                        break;
                    }
                else
                    Pile[i] = atoi(tmp);
                for (int i = 0; i < 5; i++)tmp[i] = 0;
                i++;
            }
            if (Data && StrLine[j] != ' ')
                tmp[TempCount++] = StrLine[j];
            if (!Data&&StrLine[j] != ' ')
            {
                Data = true;
                tmp[TempCount++] = StrLine[j];
            }
        }
        if (strlen(StrLine) == 0 || i == 52)break;
    }
    if (i<52)
    {
        cout << -1 << endl;
        return 0;
    }
    for (int i = 0; i < 52; i++)
        Insert(Pile[i]);
    for (int i = 0; i < 52; i++)
        if (Hand[i] == 11)cout << "J" << " ";
        else if (Hand[i] == 12)cout << "Q" << " ";
        else if (Hand[i] == 13)cout << "K" << " ";
        else
        cout << Hand[i] << " ";
    cout << endl;
    return 0;
}
