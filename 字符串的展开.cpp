// 字符串的展开.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <cstring>
#include <string>
using namespace std;
char str[512] = { 0 }, result[8192] = { 0 };
void stradd(char*dest,const char*source)
{
    for (int i = 0; i < strlen(source); i++)
        dest[strlen(dest)] = source[i];
}
string getSingle(int p1, int p2,char symbol)
{
    char str[32]={0};
    switch (p1)
    {
    case 1:
        if (symbol >= 'A' && symbol <= 'Z')symbol += 32;
        break;
    case 2:
        if (symbol >= 'a' && symbol <= 'z')symbol -= 32;
        break;
    case 3:
        symbol = '*';
        break;
    }
    while (p2--)str[strlen(str)] = symbol;
    string s(str);
    return s;
}
void Format(char a, char b, int p1, int p2, int p3,char* result)
{
    if (!(p3 - 1))
        for (char i = a + 1; i <= b - 1; i++)
            stradd(result, getSingle(p1, p2, i).c_str());
    else
        for (char i = b - 1; i >= a + 1; i--)
            stradd(result, getSingle(p1, p2, i).c_str());
}
bool SameType(char a, char b)
{
    return (((a >= '0' && a <= '9') && (b >= '0' && b <= '9')) || ((a >= 'a' && a <= 'z') && (b >= 'a' && b <= 'z')))&&a<b;
}
int main()
{
    int p1, p2, p3;
    cin >> p1 >> p2 >> p3;
    cin >> str;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i + 1] == '-'&&SameType(str[i],str[i+2]))
        {
            result[strlen(result)] = str[i];
            Format(str[i], str[i + 2], p1, p2, p3, result);
            if (i + 2 <= strlen(str))result[strlen(result)] = str[i + 2];
            i += 2;
        }
        else if (str[i] == '-' && SameType(str[i-1], str[i + 1]))
        {
            Format(str[i - 1], str[i + 1], p1, p2, p3, result);
            if (i + 1 <= strlen(str))result[strlen(result)] = str[i + 1];
            i++;
        }
        else
            result[strlen(result)] = str[i];
    }
    cout << result << endl;
    return 0;
}



//#include <iostream>
//#include<iomanip>
//using namespace std;
//
//int main()
//{
//    int m;
//    while (cin >> m)
//    {
//        double w[4] = { 0.00 };
//        double p[4] = { 0.00 };
//        double sum1 = 0.00;
//        double sum2 = 0.00;
//        char d;
//        double g;
//        for (; m > 0; m--)
//        {
//            cin >> d >> g;
//            switch (d)
//            {
//            case 'a':
//                w[0] += g;
//                p[0] += g * 1.5;
//                break;
//            case 'o':
//                w[1] += g;
//                p[1] += g * 1.4;
//                break;
//            case 'b':
//                w[2] += g;
//                p[2] += g * 1.48;
//                break;
//            case 'p':
//                w[3] += g;
//                p[3] += g * 1.08;
//                break;
//            }
//
//        }
//        cout << "       apple  orange banana pineapple sum" << endl;
//        cout << "price  ";
//        for (int i = 0; i < 3; i++)
//        {
//            cout << left;
//            cout << fixed << setprecision(2) << setw(7) << p[i];
//            sum1 += p[i];
//        }cout << left;
//        cout << fixed << setprecision(2) << setw(10) << p[3];
//        sum1 += p[3];
//        cout << fixed << setprecision(2) << setw(7) << sum1 << endl;
//        cout << "weight ";
//        for (int i = 0; i < 3; i++)
//        {
//            cout << left;
//            cout << fixed << setprecision(2) << setw(7) << w[i];
//            sum2 += w[i];
//        }
//        cout << left;
//        cout << fixed << setprecision(2) << setw(10) << w[3];
//        sum2 += w[3];
//        cout << fixed << setprecision(2) << setw(7) << sum2 << endl<<endl;
//    }
//
//    return 0;
//}
