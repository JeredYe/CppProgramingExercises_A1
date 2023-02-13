// 数星星.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
struct Pos
{
    int x, y;
};
int main()
{
    int n,count=0;
    cin >> n;
    Pos pos[300];
    while (n--)
    {
        bool NEW = true;
        int X, Y;
        cin >> X>> Y;
        for (int i = 0; i < count; i++)
        {
            if (pos[i].x == X && pos[i].y == Y)
            {
                NEW = !NEW;
                break;
            }
        }
        if (NEW)
        {
            pos[count].x = X; pos[count].y = Y;
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
