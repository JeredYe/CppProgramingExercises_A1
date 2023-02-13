// 字串统计.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;
int Times[16384] = { 0 };
int main()
{
    int L;
    cin >> L;
    string Str;
    cin >> Str;
    vector <string> Child;
    int ChildCount = 0;
    for (int i = L; i <= Str.length(); i++)
        for (int j = 0; j < Str.length() - i; j++)
        {
            Child.push_back(Str.substr(j, i));
            ChildCount++;
        }
    for (int i = 0; i < Str.length(); i++)
    {
        for (int j = 0; j < ChildCount; j++)
        {
            if (Child[j].compare(Str.substr(i, Child[j].length())) == 0)
                Times[j]++;
        }
    }
    int maxi = 0;
    for (int i = 0; i < ChildCount; i++)
    {
        if (Times[i] > Times[maxi]|| Times[i] == Times[maxi]&&Child[i].length()> Child[maxi].length())maxi = i;
    }
    cout << Child[maxi] << endl;
    return 0;
}
  
