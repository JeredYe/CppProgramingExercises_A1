// 繁忙的通讯兵.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    double n,distance=200;
    int Count;
    bool Right = true;
    while (cin >> n)
    {
        Count = 0;
        distance = 200;
        while(true)
        {
            if (distance >= n)
            {
                double time = 0;
                time = distance / (Right ? 50: 53);
                Right=!Right;
                distance -= time * 13;
                Count++;
            }
            else break;
        }
        cout << Count << endl;
    }
    return 0;
}

//A8 B5
//45