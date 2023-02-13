// 饲料调配.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int main()
{
    int order[3] = { 0 }, options[3][3] = { 0 };
    for (int i = 0; i < 3; i++)cin >> order[i];
    for (int i = 0; i < 3; i++)cin >> options[i][0] >> options[i][1] >> options[i][2];
    int i, j, k;
    int a, b, c;
    for (i = 0; i < 100; i++)
        for (j = 0; j < 100; j++)
            for (k = 0; k < 100; k++)
            {
                a = k * options[0][0] + j * options[1][0] + i * options[2][0];
                b = k * options[0][1] + j * options[1][1] + i * options[2][1];
                c = k * options[0][2] + j * options[1][2] + i * options[2][2];
                if ((a||b||c) && a * order[1] == order[0] * b && b * order[2] == order[1] * c&&a>=order[0]&&b>=order[1]&&c>=order[2])
                {
                    cout << k << " " << j << " " << i << " " << a / order[0] << endl;
                    return 0;
                }
            }
        cout << "NONE" << endl;
    return 0;
}
