// 快速排序练习.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;



void Sort(int* Array, int start, int end)
{
    int Standard = Array[start];
    int i = start, j = end;
    int* plow = NULL, * phigh = NULL;
    while (j > i)
    {
        if (Array[i] >= Standard)plow = &Array[i]; else if (!plow)i++;
        if (Array[j] <= Standard)phigh = &Array[j]; else if(!phigh)j--;
        if (plow && phigh)
        {
            int buf = *plow;
            *plow = *phigh;
            *phigh = buf;
            plow = NULL; phigh = NULL;
        }
    }
    if (j != start)
    {
        Sort(Array, start, j - 1);
    }
    if(j != end)
        Sort(Array, j + 1, end);
    return;
}

void Sort_ReWrite(int Array[], int start, int end)
{
    int Standard = Array[start], i = start, j = end;
    int* plow = NULL, * phigh = NULL;
    while (i < j)
    {
        if (Array[i] >= Standard)plow = &Array[i];
        else if (!plow)i++;
        if (Array[j] <= Standard)phigh = &Array[j];
        else if (!phigh)i--;
        if (plow && phigh)
        {
            int buf = *plow;
            *plow = *phigh;
            *phigh = buf;
            plow = phigh = NULL;
        }
    }
    if (j != start)
        Sort_ReWrite(Array, start, j - 1);
    if (j != end)
        Sort_ReWrite(Array, j + 1, end);
    return;
}

int main()
{
    int Array[] = { 6,4,1,8,2,5,7,9,3,10,12,11 };
    Sort(Array, 0, 11);
    for (int i = 0; i < 12; i++)cout << Array[i] << (i != 11 ? " " : "\n");
    return 0;
}


