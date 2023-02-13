// 方块转换.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//


    //for (int i = 0; i < r; i++)///debug
    //{
    //    for (int j = 0; j < r; j++)
    //        cout << *(Arr + i * MAXSIZE + j) << " ";
    //    cout << endl;
    //}
#include <iostream>
#define MAXSIZE 15
using namespace std;
bool Compare(char arr1[MAXSIZE][MAXSIZE], char arr2[MAXSIZE][MAXSIZE], int r)
{
    for (int i = 0; i < r; i++)
        for (int j = 0; j < r; j++)
            if (arr1[i][j] != arr2[i][j])return false;
    return true;
}
void Route90(char* Arr ,int r)
{
    char buf[MAXSIZE][MAXSIZE] = { 0 };
    for (int i = 0; i < r; i++)
        for (int j = 0; j < r; j++)
            buf[i][j] = *(Arr + i * MAXSIZE + j);
    for (int i = 0; i < r; i++)
        for (int j = 0; j < r; j++)
            *(Arr + i * MAXSIZE + j) = buf[r - j - 1][i];
}
void Reverse(char* Arr, int r)
{
    char buf[MAXSIZE][MAXSIZE] = { 0 };
    for (int i = 0; i < r; i++)
        for (int j = 0; j < r; j++)
            buf[i][j] = *(Arr + i * MAXSIZE + j);
    for (int i = 0; i < r; i++)
        for (int j = 0; j < r; j++)
            *(Arr + i * MAXSIZE + j) = buf[i][r-j-1];

}
void Route180(char* Arr, int r)
{
    Route90(Arr,r);
    Route90(Arr, r);
}
void Route270(char* Arr, int r)
{
    Route90(Arr, r);
    Route90(Arr, r);
    Route90(Arr, r);
}
int main()
{
    int r;
    char arr[MAXSIZE][MAXSIZE] = { 0 }, arrTarget[MAXSIZE][MAXSIZE] = { 0 };
    cin >> r;
    for (int i = 0; i < r; i++)
        for (int j = 0; j < r; j++)
            cin >> arr[i][j];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < r; j++)
            cin >> arrTarget[i][j];
    int ID = 0;
    char trans[MAXSIZE][MAXSIZE] = { 0 };


    do
    {
        for (int i = 0; i < r; i++)
            for (int j = 0; j < r; j++)
                trans[i][j] = arr[i][j];
        switch (++ID)
        {
        case 1:
            Route90(*trans, r);
            break;
        case 2:
            Route180(*trans, r);
            break;
        case 3:
            Route270(*trans, r);
            break;
        case 4:
            Reverse(*trans, r);
            break;
        case 5:

            for (int i = 0; i < r; i++)
                for (int j = 0; j < r; j++)
                    trans[i][j] = arr[i][j];
            Reverse(*trans, r);
            Route90(*trans, r);
            if (Compare(arrTarget, trans, r))break;

            for (int i = 0; i < r; i++)
                for (int j = 0; j < r; j++)
                    trans[i][j] = arr[i][j];
            Reverse(*trans, r);
            Route180(*trans, r);
            if (Compare(arrTarget, trans, r))break;

            for (int i = 0; i < r; i++)
                for (int j = 0; j < r; j++)
                    trans[i][j] = arr[i][j];
            Reverse(*trans, r);
            Route270(*trans, r);
            if (Compare(arrTarget, trans, r))break;

            break;

        case 6:
            break;
        }

    } while (!Compare(arrTarget, trans, r)&&ID!=7);
    cout << ID << endl;
    return 0;
}

