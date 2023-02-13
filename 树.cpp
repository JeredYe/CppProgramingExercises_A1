// 树.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
using namespace std;
int main()
{
    int L, M;
    while (cin >> L >> M)
    {
        bool Trees[131072];
        for (int i = 0; i < 131072; i++)Trees[i] = true;
        while (M--)
        {
            int x, y;
            cin >> x >> y;
            for (int i = min(x, y); i <= max(x, y); i++)
            {
                Trees[i] = false;
            }
        }
        int Count = 0;
        for (int i = 0; i <= L; i++)Count += (Trees[i] ? 1 : 0);
        cout << Count << endl;
    }
    return 0;
}
