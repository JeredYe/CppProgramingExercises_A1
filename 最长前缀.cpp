// 最长前缀.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
int main()
{
    vector <string> Pre;
    string Temp;
    int Num = 0;
    while (cin >> Temp)
        if (Temp.compare(".") == 0)break;
        else {
            Pre.push_back(Temp.c_str());
            Num++; 
        }
    string Str;
    cin >> Str;
    int Length = 0;
    while (true)
    {
        bool Exist = false;
        int maxi = 0;
        for (int i = 0; i < Num; i++)
        {
            if (Str.substr(0, Pre[i].length()).compare(Pre[i]) == 0)
            {
                Exist = true;
                maxi = (Pre[i].length() > Pre[maxi].length() ? i : maxi);
            }
        }
        if (!Exist)break;
        else
        {
            Length += Pre[maxi].length();
            Str.erase(0, Pre[maxi].length());
        }
    }
    cout << Length << endl;
    return 0;
}
