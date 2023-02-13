// 身份证号码升级.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int main()
{
    char Ori[16] = { 0 }, New[19] = { 0 };
    cin >> Ori;
    for (int i = 0; i < 6; i++)New[i] = Ori[i];
    New[6] = '1'; New[7] = '9';
    for (int i = 0; i < 9; i++)New[8 + i] = Ori[6 + i];
    int sum = 0;
    int code[] = { 7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2 };
    for (int i = 0; i < 17; i++)sum += (New[i] - '0') * code[i];
    switch (sum % 11)
    {
    case 0:
        New[17] = '1';
        break;
    case 1:
        New[17] = '0';
        break;
    case 2:
        New[17] = 'x';
        break;
    case 3:
        New[17] = '9';
        break;
    case 4:
        New[17] = '8';
        break;
    case 5:
        New[17] = '7';
        break;
    case 6:
        New[17] = '6';
        break;
    case 7:
        New[17] = '5';
        break;
    case 8:
        New[17] = '4';
        break;
    case 9:
        New[17] = '3';
        break;
    case 10:
        New[17] = '2';
        break;
    }
    cout << New << endl;
    return 0;
}
