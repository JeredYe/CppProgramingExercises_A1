// 弟弟的作业.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char str[64] = { 0 };
    int correct = 0;
    while (cin>>str)
    {
        int state = 0, symbol = 0, nums[3] = { 0 };
        int count = 0;
        char temp[5] = { 0 };
        for (int i = 0; i < strlen(str); i++)
        {
            if (str[i] >= '0' && str[i] <= '9')temp[count++] = str[i];
            else {
                state++;
                switch (str[i])
                {
                case '+':symbol = 0; break;
                case '-':symbol = 1; break;
                case '=':break;
                case '?':nums[2] = -1; break;
                }
                if (state == 1) {
                    nums[0] = atoi(temp);
                    count = 0;
                    for (int i = 0; i < 5; i++)temp[i] = 0;
                }
                if (state == 2) {
                    nums[1] = atoi(temp);
                    count = 0;
                    for (int i = 0; i < 5; i++)temp[i] = 0;
                }
            }
                if (i==strlen(str)-1) {
                    if (nums[2] != -1)
                    {
                        nums[2] = atoi(temp);
                        count = 0;
                        for (int i = 0; i < 5; i++)temp[i] = 0;
                    }
                    int ans = 0;
                    if (!symbol)ans = nums[0] + nums[1];
                    else ans = nums[0] - nums[1];
                    if (ans == nums[2])correct++;
                }
        }
    }
    cout << correct << endl;
    return 0;
}

