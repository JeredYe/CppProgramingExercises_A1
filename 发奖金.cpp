// 发奖金.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    int val;
    cin >> val;
    double bonus=0;
    if (val <= 100000)
    {
        bonus = val * 0.1;
    }
    else if (val > 100000 && val <= 200000)
    {
        bonus = 10000 + (val - 100000) * 0.075;
    }
    else if (val > 200000 && val <= 400000)
    {
        bonus = 17500 + (val - 200000) * 0.05;
    }
    else if (val > 400000 && val <= 600000)
    {
        bonus = 27500 + (val - 400000) * 0.03;
    }
    else if (val > 600000 && val <= 1000000)
    {
        bonus = 33500 + (val - 600000) * 0.015;
    }
    else if (val > 1000000)
    {
        bonus = 39500 + (val - 1000000) * 0.01;
    }
    cout <<fixed<<setprecision(2)<< bonus << endl;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
