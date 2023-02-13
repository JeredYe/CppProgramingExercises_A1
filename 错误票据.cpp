// 错误票据.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

    //do
    //{
    //    bool Same = false;
    //    int tmp = 0; cin >> tmp;
    //    for (int i = 0; i < count; i++)
    //        if (tmp == Arr[i])
    //        {
    //            same = tmp;
    //            Same = true;
    //        }
    //    if (!Same)
    //    {
    //        Arr[count++] = tmp;
    //    }
    //    if (getchar() == '\n')countline++;
    //} while (countline<n);

#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int Arr[100000] = { 0 };
bool digit(char symbol)
{
    return symbol >= '0' && symbol <= '9';
}
int main()
{
    int n,countline=0,count=0,same=0,lack=0;
    cin >> n;
    cin.get();

    while (n--)
    {
        char String[1024] = { 0 };
        bool Num = false;
        cin.getline(String, 1024);
        int tmpcount = 0; char TempNum[7] = { 0 };
        for (int i = 0; i <= strlen(String); i++)
        {
            if(Num&& digit(String[i]))TempNum[tmpcount++] = String[i];
            if (!Num && digit(String[i]))
            {
                Num = true;
                TempNum[tmpcount++] = String[i];
            }
            if (Num && !digit(String[i]))
            {
                bool Same = false;
                Num = false;
                tmpcount = 0;
                int num = atoi(TempNum);
                for (int i = 0; i < 7; i++)TempNum[i] = 0;

                for (int i = 0; i < count; i++)
                    if (num == Arr[i])
                    {
                        same = num;
                        Same = true;
                    }
                if (!Same)
                    Arr[count++] = num;

            }

        }
    }
    for (int i = 0; i < count - 1; i++)
        for (int j = 1; j <= count - i - 1; j++)
            if (Arr[j - 1] > Arr[j])
            {
                int buf = Arr[j - 1];
                Arr[j - 1] = Arr[j];
                Arr[j] = buf;
            }
    for (int i = 0; i < count; i++)
        if (Arr[i] + 1 != Arr[i + 1])
        {
            lack = Arr[i] + 1;
            break;
        }
    cout << lack << " " << same << endl;
    return 0;
}

