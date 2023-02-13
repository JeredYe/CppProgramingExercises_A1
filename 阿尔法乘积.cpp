// 阿尔法乘积.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#define _CRT_SECURE_NO_DEPRECATE

#include <iostream>
using namespace std;
#include <cstring>
#include <cstdio>
int Alpha(int Num)
{
    int result = 1;
    char Buffer[16];
    sprintf(Buffer, "%d", Num);
    for (int i = 0; i < strlen(Buffer); i++)
        if (Buffer[i] - 48 != 0)result *= (Buffer[i] - 48);
    if (result >= 10)return Alpha(result);
    else
        return result;
}
///////2022.9.29叶徐俊 基于递归方法的阿尔法乘积算法
int main()
{
    int num;
    cin >> num;
    cout << Alpha(num) << endl;
    return 0;
}
