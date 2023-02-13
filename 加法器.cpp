// 加法器.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char Arr[1024] = { 0 };
    while (cin >> Arr)
    {
        string Str(Arr);
        Str.push_back('+');
        int sum = 0;
        while (Str.length() > 0)
        {
            string buf=Str.substr(0, Str.find('+', 0));
            buf.erase(buf.length());
            sum += atoi(buf.c_str());
            Str.erase(0, Str.find('+', 0)+1);
        }
        cout << sum << endl;
    }
    return 0;
}
//
//#include <iostream>
//using namespace std;
//int main()
//{
//    int n;
//    while (cin >> n)////输入n
//    {
//        while (n--)////循环n次，比如n=5，那每次循环，n就变成4,3,2,1,0，结束，循环5次
//        {
//            cout << "*";////每次循环输出一个*
//        }
//        cout << endl;////结尾输出换行符
//    }
//
//    return 0;
//}