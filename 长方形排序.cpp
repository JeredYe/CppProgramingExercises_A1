// 长方形排序.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
struct Square
{
    int ID = 0, x = 0, y = 0;
};
template <typename T>
void Swap(T Array[],int A, int B)
{
    T* p = &Array[A];
    T buf = Array[A];
    *p = Array[B];
    p = &Array[B];
    *p = buf;
}
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int m,count=0;
        Square Arr[10000];
        cin >> m;
        while (m--)
        {
            int a, b;
            cin >> Arr[count].ID >> a >> b;
            Arr[count].x = (a > b ? a : b);
            Arr[count].y = (a < b ? a : b);
            count++;
        }
        for (int i = 0; i < count; i++)
            for (int j = 1; j < count; j++)
                if (Arr[j - 1].ID > Arr[j].ID||(Arr[j - 1].ID == Arr[j].ID && Arr[j - 1].x > Arr[j].x)||(Arr[j - 1].ID == Arr[j].ID && Arr[j - 1].x == Arr[j].x && Arr[j - 1].y > Arr[j].y))
                    Swap(Arr,j - 1,j);
        for (int j = 1; j < count; j++)
            if (Arr[j - 1].ID == Arr[j].ID && Arr[j - 1].x == Arr[j].x && Arr[j - 1].y == Arr[j].y)
                Arr[j - 1].ID = Arr[j - 1].x = Arr[j - 1].y = -1;
        for (int i = 0; i < count; i++)
            if(Arr[i].ID!=-1)cout << Arr[i].ID << " " << Arr[i].x << " " << Arr[i].y << endl;
        cout << endl;
    }
    return 0;
}

