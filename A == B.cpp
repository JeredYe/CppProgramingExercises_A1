// A == B.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <cstring>
using namespace std;
void Format(char Str[1024])
{
    bool valid = false, dot = false;
    char Buf[1024] = { 0 };
    int count = 0;
    for (int i = 0; i < strlen(Str); i++)
    {
        if (Str[i] != '0'||Str[i]=='.')valid = true;
        if (Str[i] == '.')dot = true;
        if (valid)Buf[count++] = Str[i];
    }
    int Last = strlen(Buf) - 1;
    if (dot)
        while (Buf[Last] == '0' || Buf[Last] == '.')
        {
            if (Buf[Last] == '.')
            {
                Buf[Last--] = 0;
                break;
            }
            Buf[Last--] = 0;
        }
    for(int i=0;i<1024;i++)
    Str[i] = Buf[i];
}
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        char N1[1024] = { 0 }, N2[1024] = { 0 };
        cin >> N1 >> N2;
        Format(N1);
        Format(N2);
        if (strcmp(N1, N2) == 0)cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}


//#include<cmath>
//#include <iostream>
//using namespace std;
//int main()
//{
//    int N, n = 0;
//    double height = 0;
//    while (cin>>N)
//    {
//        while (height < N)
//            height = pow(2, ++n) / 100;
//        cout << n << endl;
//    }
//    return 0;
//}