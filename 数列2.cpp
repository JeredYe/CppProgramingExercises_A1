// 数列2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
//
//#include <iostream>
//using namespace std;
//
//int Array[15] = { 0 };
//bool Selected[15] = {0};
//int TempSum[15] = { 0 };
//int  countN = 0;
//int TempCount = 0;
//int n;
//int Sum()
//{
//    int result = 0;
//    for (int i = 0; i < 15; i++)result += TempSum[i];
//    return result;
//}
//void DFS(int start)
//{
//    if (Sum() != 0)
//    {
//        if (Sum() % 11 == 0)
//        {
//            countN++;
//        }
//        else return;
//    }
//
//    for (int i = start; i < n; i++)
//    {
//
//        if (!Selected[i])
//        {
//            TempSum[TempCount] = Array[i];
//            Selected[i] = true;
//            TempCount++;
//            DFS(i);
//            TempCount--;
//            Selected[i] = false;
//            TempSum[TempCount] = 0;
//        }
//    }
//}
//
//int main()
//{
//    
//    while (cin >> n)
//    {
//        countN = 0;
//        for (int i = 0; i < n; i++)cin >> Array[i];
//        DFS(0);
//        cout << countN << endl;
//        for (int i = 0; i < 15; i++)
//            Selected[i] = Array[i] = 0;
//    }
//    return 0;
//}


#include <iostream>
using namespace std;
int Array[15] = { 0 };
int main()
{
    int n;
    while (cin >> n)
    {
        for (int i = 0; i < n; i++)cin >> Array[i];
        int count = 0;
        for (int a = 0; a < (Array[14] ? 2 : 1); a++)
        {
            for (int b = 0; b < (Array[13] ? 2 : 1); b++)
            {
                for (int c = 0; c < (Array[12] ? 2 : 1); c++)
                {
                    for (int d = 0; d < (Array[11] ? 2 : 1); d++)
                    {
                        for (int e = 0; e < (Array[10] ? 2 : 1); e++)
                        {
                            for (int f = 0; f < (Array[9] ? 2 : 1); f++)
                            {
                                for (int g = 0; g < (Array[8] ? 2 : 1); g++)
                                {
                                    for (int h = 0; h < (Array[7] ? 2 : 1); h++)
                                    {
                                        for (int i = 0; i < (Array[6] ? 2 : 1); i++)
                                        {
                                            for (int j = 0; j < (Array[5] ? 2 : 1); j++)
                                            {
                                                for (int k = 0; k < (Array[4] ? 2 : 1); k++)
                                                {
                                                    for (int l = 0; l < (Array[3] ? 2 : 1); l++)
                                                    {
                                                        for (int m = 0; m < (Array[2] ? 2 : 1); m++)
                                                        {
                                                            for (int n = 0; n < (Array[1] ? 2 : 1); n++)
                                                            {
                                                                for (int o = 0; o < (Array[0] ? 2 : 1); o++)
                                                                {
int sum = (o * Array[0] + n * Array[1] + m * Array[2] + l * Array[3] + k * Array[4] + j * Array[5] + i * Array[6] + h * Array[7] + g * Array[8] + f * Array[9] + e * Array[10] + d * Array[11] + c * Array[12] + b * Array[13] + a * Array[14]);if (sum&&sum%11==0 )count++;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }

        cout << count << endl;
        for (int i = 0; i < 15; i++)
            Array[i] = 0;
    }
    return 0;
}