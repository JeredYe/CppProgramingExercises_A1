// 奇怪的数列.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>
using namespace std;
string Transform(string Origin)
{
    string newstr; string now = ""; int count = 1;
    for (int i = 0; i <= Origin.length(); i++)
    {
        if (Origin.substr(i, 1) != now)
        {
            if(now!="")
            {
                newstr.append(to_string(count));
                newstr.append(now);
            }
            now = Origin.substr(i, 1);
            count = 1;
        }
        else count++;
    }
    return newstr;
}
int main()
{
    string str;
    int n;
    cin >> str >> n;
    while (n--)str = Transform(str);
    cout << str << endl;
    return 0;
}
