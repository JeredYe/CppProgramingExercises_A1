// 繁殖问题.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//


//#include <iostream>
//using namespace std;
//
//class Mouse
//{
//public:
//    int month = 1; bool Dead = false;
//    Mouse* Child1 = nullptr, * Child2 = nullptr, * Child3 = nullptr;
//    void Next()
//    {
//        month++;
//        if (Child1)Child1->Next();
//        if (Child2)Child2->Next();
//        if (Child3)Child3->Next();
//        if (month == 3)Child1 = new Mouse();
//        if (month == 4)Child2 = new Mouse();
//        if (month == 5)Child3 = new Mouse();
//        if (month == 7)Dead = true;
//    }
//    void Count(int* sum)
//    {
//        if (!this->Dead)*sum = *sum + 1;
//        if (Child1)
//            Child1->Count(sum);
//        if (Child2)
//            Child2->Count(sum);
//        if (Child3)
//            Child3->Count(sum);
//    }
//};
//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int N;
//    while (cin >> N)
//    {
//        Mouse Gen1;
//        for (int i = 1; i < N; i++)
//            Gen1.Next();
//        int sum = 0;
//        Gen1.Count(&sum);
//        cout << sum << endl;
//    }
//    return 0;
//}
////数据过大时TLE

#include <iostream>
using namespace std;
int main()
{
    int N, Array[60] = { 1,1,2,3,5,7,10 };
    while (cin >> N)
    {
        for (int i = 7; i < N; i++)
        {
            Array[i] = Array[i - 1] + Array[i - 2] - Array[i - 5];
        }
        cout << Array[N - 1] << endl;
    }
    return 0;
}
