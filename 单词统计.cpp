// 单词统计.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.get();
    while (n--)
    {
        int count = 0;
        char buf[128] = { 0 };
        cin.getline(buf, 128);
        bool SPACE=false;
        for (int i = 0; i < strlen(buf); i++)
        {
            if (buf[i] == ' ')SPACE = true;
            if ((i!=0?SPACE:true) && buf[i] != ' ')
            {
                SPACE = false;
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}

//int count = 0;
//do
//{
//    char buf[256];
//    cin >> buf;
//    count++;
//} while (cin.get() != '\n');
//cout << count << endl;