// 摩托车.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <cstring>
using namespace std;
struct Product
{
    char Type[5] = { 0 }, Color[10] = { 0 }, Motor[5] = { 0 };
};
int main()
{
    int n, m;
    while (cin >> n >> m)
    {
        Product Arr[100];
        char Order[21][5] = { 0 };
        for (int i = 0; i < n; i++)
            cin >> Order[i];
        for (int i = 0; i < m; i++)
            cin >> Arr[i].Type >> Arr[i].Color >> Arr[i].Motor;
        bool exist = false;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                if (strcmp(Order[i], Arr[j].Type) == 0)
                {
                    cout << Arr[j].Type << " " << Arr[j].Color << " " << Arr[j].Motor << endl;
                    exist = true;
                }
        if (!exist)cout << "Not found!" << endl;
    }
    return 0;
}
