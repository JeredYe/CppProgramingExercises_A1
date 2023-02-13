// 约瑟夫环2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int main()
{
    int  People[64] = { 0 };
    int k;
    while (cin >> k)
    {
        for (int i = 0; i < k; i++)People[i] = 1;
        for (int i = k; i < 2*k; i++)People[i] = 2;
        int m = 1, exist = 2 * k,count=0;
        while (true)
        {
            int Trial[64]={0};
            exist = 2 * k; count = 0;
            for (int i = 0; i < 2 * k; i++)Trial[i] = People[i];
            while (true)
            {
                count += m - 1; count %= exist;//0-2k-1
                if (exist == k)break;
                if (Trial[count] == 2)
                {
                    exist--;
                    Trial[count] = 0;
                    for (int i = count; i < exist+1; i++)Trial[i] = Trial[i + 1];
                }
                else
                {
                    m++;
                    break;
                }
            }
            bool Done = true;
            for (int i = 0; i < 2 * k; i++)Done = (Trial[i]==2 ? false : Done);
            if (Done)
            {
                cout << m << endl;
                break;
            }
        }
    }
    return 0;
}
