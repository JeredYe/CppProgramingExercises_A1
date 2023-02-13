// 等差数列.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

//#include <iostream>
//#include <vector>
//using namespace std;
//bool exist = false;
//bool isSquare(int num,int M)
//{
//    for (int p = 0; p <= M; p++)
//        for (int q = 0; q <= M; q++)
//            if (num == p * p + q * q)return true;
//    return false;
//}
//bool Judge(int a, int b, int M,int N)
//{
//    for (int i = 0; i < N; i++)
//        if (!isSquare(a + i * b,M))return false;
//    cout << a << " " << b << endl;
//    exist = true;
//    return true;
//}
//int main()
//{
//    int N, M;
//    cin >> N >> M;
//    int  count = (M+1)*(M+1);
//    vector <int>arr;
//    for (int i = 0; i <= M; i++)
//        for (int j = 0; j <= M; j++)
//            arr.push_back(i * i + j * j);
//    int times = 1;
//    for (int b = 1; b*N<=2*M*M;)
//    {
//        bool found=false;
//        for (int a = 0; a < count; a++)
//        {
//            found = (Judge(arr[a], b, M, N) ? true : found);
//        }
//        if (found)
//        {
//            if (times == 1)
//                times = b;
//            b += times;
//        }
//        else b++;
//    }
//    if (!exist)cout << "NONE" << endl;
//    return 0;
//}
//TLE

#include <iostream>
#include <vector>
using namespace std;
int arr[2 * 250 * 250] = { 0 };
bool exist = false;
bool Judge(int a, int b,int N)
{
    for (int i = 0; i < N; i++)
		if (!arr[a + i * b])return false;
    cout << a << " " << b << endl;
    exist = true;
    return true;
}
int main()
{
	int N, M;
	cin >> N >> M;
	for (int i = 0; i <= M; i++)
		for (int j = 0; j <= M; j++)
			arr[i * i + j * j] = 1;
	int a = 0;
	for (int b = 1; b*(N - 1) <= 2 * M * M; b++)
	{
		for (a = 0; a <= 2 * M * M; a++)
			Judge(a, b, N);
	}
	if(!exist)cout << "NONE" << endl;
	return 0;
}
///反思：如果要判断一个数是否满足一定条件（比如双平方和），不一定需要一个个判断
//可以先通过迭代，将范围内所有的符合条件的情况列出来，以 数 组 下 标 的形式保存
//这样可以将判断的时间复杂度降至O(1)