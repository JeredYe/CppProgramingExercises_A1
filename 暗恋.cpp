// 暗恋.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int main()
{
    int r, c, arr[256][256]={2};
    for (int i = 0; i < 256; i++)
        for (int j = 0; j < 256; j++)
            arr[i][j] = 2;

    cin >> r>> c;
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> arr[i][j];
    int max = 1;

    /// <summary>
    /// 错误1：横纵不分
    /// </summary>
    /// <returns></returns>
    for (int i = 0; i < r; i++)///vertical
        for (int j = 0; j < c; j++)///horizonal
        {
            if (i == 8 && j == 6)
                cout << "";
            int scale = 1;
            bool Is = true;
            /// <summary>
            /// 错误2：坐标混乱
            /// </summary>
            /// <returns></returns>
            while (arr[i + scale][j] == arr[i][j] && arr[i][j + scale] == arr[i][j]&&Is&&
                i + scale<=r&&j+scale<=c
                ) ///判断横竖加一位是否相同
            {

                for (int a = j; a <= j + scale; a++)///判断右边是否相同
                {
                    if (arr[i][j] != arr[i + scale][a])
                    {
                        Is = false;
                        break;
                    }
                }
                for (int a = i; a <= i + scale; a++)///判断下面是否相同
                {
                    if (arr[i][j] != arr[a][j+scale])
                    {
                        Is = false;
                        break;
                    }
                }

                    if (!Is)break;

                if (Is)scale++;
                else break;
            }
            max = (scale * scale > max ? scale * scale : max);
            
        }
    cout << max << endl;
    return 0;
}



