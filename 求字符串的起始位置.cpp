// 求字符串的起始位置.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>
using namespace std;
int seek(string A, string B)
{
    int index = 0;
    while (index + B.size() <= A.size())
        if (A.substr(index++, B.size()) == B)return index;
    return 0;
}
int main()
{
    char S1[256], S2[256];
    while (cin >> S1 >> S2)
    {
        vector<string> str;
        str.push_back(S1);
        str.push_back(S2);
        cout << seek(str[0], str[1]) << endl;
    }
    return 0;
}
