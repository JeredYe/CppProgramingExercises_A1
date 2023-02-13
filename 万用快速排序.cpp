// 万用快速排序.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
 template  <typename T>
bool Compare(T a, T b)
{
    return a > b;
}

template  <class T>
void Sort(T Array[], int start, int end, bool(*Compare)(T, T))
{
    int i = start, j = end;
    T Standard = Array[start];
    T* low = NULL, * high = NULL;
    while (i < j)
    {
        if (Compare(Array[i], Standard))
        {
            low = (T*)Array[i];
        }
        else if (!low)i++;
        if (Compare(Standard, Array[j]))
        {
            high = (T*)Array[j];
        }
        else if (!high)j--;
        if (low && high)
        {
            T buf = *low;
            *low = *high;
            *high = buf;
            low = high = NULL;
        }
    }
    //if (j != end)
    //    Sort(Array, j + 1, end, &Compare);
    //if (j != start)
    //    Sort(Array, start,j - 1, &Compare);
    return;
}

int main()
{
    int Arr[] = { 1,5,9,6,7,4,12,3,2,6,1,4,0,8,5,9 };
    Sort(Arr, 0, 15, &Compare);
    return 0;

}
