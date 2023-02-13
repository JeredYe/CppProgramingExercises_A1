// 汽水瓶.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int main()
{
    int bottles,bonus;
    while (cin >> bottles)
    {
        if (!bottles)break;
        bonus = 0;
        while (true)
        {
            if (bottles <= 1)break;
            bool borrow = false;
            if (bottles % 3 == 2)
            {
                borrow = true;
                bottles++;
                bonus++;
            }
            int buf = bottles / 3;
            if (borrow)buf--;
            bonus += buf;
            bottles %= 3;
            bottles += buf;
        }
        cout << bonus << endl;
    }
    return 0;
}
