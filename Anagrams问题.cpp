// Anagrams问题.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char Arr[81] = { 0 };
    bool Same = true;
    int n = 2, Alphabet[26] = { 0 };
    while(n--)
    {
        cin >> Arr;
        for (int i = 0; i < strlen(Arr); i++)
        {
            if (Arr[i] >= 'a' && Arr[i] <= 'z')Arr[i] -= 32;
            Alphabet[Arr[i] - 'A']++;
        }
        int num = 0;
        for (int i = 0; i < 26; i++)
            if (Alphabet[i])
                if (num == 0)num = Alphabet[i];
                else if (num != Alphabet[i]) { Same = false; break; }
    }
    int num = 0;
    for (int i = 0; i < 26; i++)
        if (Alphabet[i])
            if (num == 0)num = Alphabet[i];
            else if (num != Alphabet[i]) { Same = false; break; }
    cout << (Same ? 'Y' : 'N') << endl;
    return 0;
}
