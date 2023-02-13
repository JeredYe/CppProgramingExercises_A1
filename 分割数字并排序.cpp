// 分割数字并排序.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
#include <cstring>
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        char Arr[256] = { 0 };
        cin >> Arr;
        Arr[strlen(Arr)] = '5';
        int count = 0, countN = 0, nums[100] = { 0 }; char temp[20] = { 0 };
        for (int i = 0; i < strlen(Arr); i++)
        {
            if (Arr[i] != '5')
                temp[count++] = Arr[i];
            else if (temp[0] != 0)
            {
                    nums[countN++] = atoi(temp);
                    for (int i = 0; i < 20; i++)
                        temp[i] = 0;
                    count = 0;
            }
        }
        for (int i = 0; i < countN; i++)
            for (int j = 1; j < countN - i; j++)
                if (nums[j - 1] > nums[j])
                {
                    int buf = nums[j - 1];
                    nums[j - 1] = nums[j];
                    nums[j] = buf;
                }
        for (int i = 0; i < countN; i++)
            cout << nums[i] << (i==countN-1?'\n':' ');
    }
    return 0;
}
