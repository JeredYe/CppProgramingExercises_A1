// 笨小猴.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
#include <cstring>
#include <cmath>
bool isPrime(int num)
{
    if (num <= 1)return false;
    for (int i = 2; i <= sqrt(num); i++)
        if (num %i == 0)return false;
    return true;
}
int main()
{
    int times[26] = { 0 };
    char word[105] = { 0 };
    cin >> word;
    for (int i = 0; i < strlen(word); i++)
        times[word[i] - 'a']++;
    int maxi = 0, mini = 0;
    for (int i = 0; i < 26; i++)
    {
        if(times[maxi] < times[i])maxi=i;
        if (times[i]&&times[mini] > times[i])mini = i;
        if (times[mini] == 0 && times[i])mini = i;
    }
    if (isPrime(times[maxi] - times[mini]))
        cout << "Lucky Word" << endl << times[maxi] - times[mini] << endl;
    else
        cout << "No Answer" << endl << 0 << endl;
    return 0;
}
