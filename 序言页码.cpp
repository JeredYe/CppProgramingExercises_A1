// 序言页码.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <cstring>
using namespace std;
char alphabet[] = "IVXLCDM";
int countN[7] = { 0 };
void Generate(int num)
{
    int eachnum[4] = { 0 }, i = 0;
    while (num)
    {
        eachnum[i++] = num % 10;
        num /= 10;
    }
    for(int i=0;i<4;i++)
        if(eachnum[i])
    switch (eachnum[i])
    {
        case 1:
        case 2:
        case 3:
            countN[0 + 2 * i] += eachnum[i];
            break;
        case 8:
            countN[0 + 2 * i] ++;
        case 7:
            countN[0 + 2 * i] ++;
        case 4:
        case 6:
            countN[0 + 2 * i] ++;
        case 5:
            countN[1 + 2 * i] ++;
            break;
        case 9:
            countN[0 + 2 * i] ++;
            countN[2 + 2 * i] ++;
            break;
    }
}
int main()
{
    int n;
    cin >> n;
//    Generate(3514);
    for (int i = 1; i <= n; i++)
        Generate(i);
    for (int i = 0; i < 7; i++)
        if (countN[i])cout << alphabet[i] << " " << countN[i] << endl;
    return 0;
}


