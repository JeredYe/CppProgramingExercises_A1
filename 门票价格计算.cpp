// 门票价格计算.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double discount=1,price;
    int people;
    cin >> people;
    if (people > 20)discount = 0.9;
    if (people > 40)discount = 0.85;
    if (people > 80)discount = 0.8;
    if (people > 120)discount = 0.7;
    price = 5 * people * discount;
    cout << fixed << setprecision(2) << price << endl;
    return 0;
}
