// 空心三角形.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int main()
{
    int n, scale;
    char symb;
    cin >> n;
    while (n--)
    {
        cin >> symb >> scale;
        for (int i = 1; i < scale+1; i++)
        {
            if(i!=scale)for (int j = 0; j < scale-i; j++)cout << " ";
            for (int j = 0; j < 2 * i - 1; j++)
                cout << (j==0||j==2*i-2||i==scale? symb: ' ');
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
