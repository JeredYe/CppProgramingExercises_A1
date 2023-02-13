// 最长的单词.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
    char arr[1024]={0};
    while (cin.getline(arr,1024))
    {
        string Arr(arr, strlen(arr));
        Arr.push_back(' ');
        string maxword;
        int max = 0;
        int Size = Arr.find(' ',0);
        while (Size!=-1)
        {
            Size=Arr.find(' ', 0);
            if (maxword.length() < Arr.substr(0, Size).length())
            {
                maxword.clear();
                maxword.append(Arr.substr(0, Size).c_str());
                max = maxword.length();
            }
                Arr.erase(0, Size+1);
        }
        cout <<max<<" " << maxword << endl;
    }
    return 0;
}

