// 母牛的数量.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int y;
        cin >> y;
        unsigned long long arr[256] = { 0 };
        arr[0] = arr[1] = arr[2] = 1;
        for (int i = 3; i <= y + 1; i++)
            arr[i] = arr[i - 1] + arr[i - 3];
        cout << arr[y + 1] << endl;
    }
    return 0;
}

//#include <vector>

//struct Cow
//{
//    int year = 0;
//    vector <Cow> Sons;
//    void Next()
//    {
//        for (int i = 0; i < year - 3; i++)
//            Sons[i].Next();
//        year++;
//        if (year >= 4)
//        {
//            Cow Son;
//            Son.Next();
//            Sons.push_back(Son);
//        }
//    }
//    void Count(int* sum)
//    {
//        if (year >= 4)
//        {
//            *sum = *sum + year - 3;
//            for (int i = 0; i < year - 3; i++)
//                Sons[i].Count(sum);
//        }
//        else *sum = *sum + 1;
//    }
//};