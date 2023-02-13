// 乒乓球.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string Str,Strtmp;
    int w11 = 0, l11 = 0, w21 = 0, l21 = 0,count=0;
    int A21[10][2] = { 0 };
    while (cin >> Strtmp)
    {
        Str += Strtmp;
        while (Str.length())
        {
            char Now = Str.substr(0, 1).c_str()[0];
            Str.erase(0, 1);
            if (Now == 'W'){w11++; w21++;}
            else if(Now == 'L') { l11++; l21++; }
            else
            {
                if(w11||l11)cout << w11 << ":" << l11 << endl;
                cout << endl;
                for (int i = 0; i < count; i++)
                    cout << A21[i][0] << ":" << A21[i][1] << endl;
                cout << w21 << ":" << l21 << endl;
                cout << endl;
                w11 = 0, l11 = 0, w21 = 0, l21 = 0,count=0;
                break;
            }
            if (w11 >= 11 && w11 - l11 >= 2|| l11 >= 11 && l11 - w11 >= 2)
            {
                cout << w11 << ":" << l11 << endl;
                w11 = l11 = 0;
            }
            if (w21 >= 21 && w21 - l21 >= 2 || l21 >= 21 && l21 - w21 >= 2)
            {
                A21[count][0] = w21;
                A21[count][1] = l21;
                count++;
                w21 = l21 = 0;
            }
        }
    }
    return 0;
}
