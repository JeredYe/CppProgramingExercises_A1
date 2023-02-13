// 奇妙的数字.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int EachNum(int Num)
{
    char tmp[16];
    int result = 0;
    sprintf_s(tmp, "%d", Num);
    for (int i = 0; i < strlen(tmp); i++)
    {
        if (tmp[i] != 0)result += tmp[i] - 48;
    }
    return result;
}
int main()
{
    int n,num;
    while (cin >> n)
    {
        num = 8898;
        while (n > 0)
        {
            num++;
            if (EachNum(num) % 17 == 0 && EachNum(num + 1) % 17 == 0)n--;
        }
        cout << num << endl;
    }
    return 0;
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
