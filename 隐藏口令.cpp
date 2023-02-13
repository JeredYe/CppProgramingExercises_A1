// 隐藏口令.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int main()
{
    int L;
    cin >> L;
    string str, temp;
    while (getline(cin, temp))str.append(temp);
    string strmin = str;
    int first = 0;
    for (int i = 0; i < L; i++)
    {
        string strtmp = str.substr(i, str.length() - i);
        strtmp.append(str.substr(0, i));
        if (strmin > strtmp)
        {
            first = i;
            strmin = strtmp;
        } 
    }
    cout << first << endl;
    return 0;
}
