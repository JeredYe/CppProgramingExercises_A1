// 按出生日期排序.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <iomanip>
using namespace std;
struct Person
{
    char Name[16] = { 0 };
    int y = 0, m = 0, d = 0;
};
template <typename T>
void Swap(T Array[], int a, int b)
{
    T buf = Array[a];
    Array[a] = Array[b];
    Array[b] = buf;
}
int main()
{
    int count=0;
    Person Arr[10];
    cin >> count;
    for (int i=0;i< count;i++)
        cin >> Arr[i].Name >> Arr[i].y >> Arr[i].m >> Arr[i].d;
    for (int i = 0; i < count; i++)
        for (int j = 1; j < count; j++)
            if (Arr[j - 1].m > Arr[j].m || Arr[j - 1].m == Arr[j].m && Arr[j - 1].d > Arr[j].d)
                Swap(Arr, j - 1, j);
    for (int i = 0; i < count; i++)
        cout << Arr[i].Name << " " << Arr[i].y << "-" << setw(2) << setfill('0') << Arr[i].m <<"-" << setw(2) << setfill('0') << Arr[i].d << endl;
    return 0;
}
