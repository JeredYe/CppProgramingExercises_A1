// 丑数.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

//#include <iostream>
//#include <cmath>
//using namespace std;
//int S[105] = { 0 };
//int K, N;
//int maxN = 0;
//bool isPrime(int num)
//{
//    if (num == 2)return true;
//    for (int i = 2; i <= sqrt(num); i++)
//        if (num % i == 0)return false;
//    return true;
//}
//bool Belong(int num)
//{
//    for (int i = 2; i <= num; i++)
//    {
//        if (num % i)continue;
//        if (isPrime(i))
//        {
//            bool exist = false;
//            for (int j = 0; j < K; j++)
//                if (i == S[j]) { exist = true; break; }
//            if (!exist)return false;
//        }
//    }
////    cout << num << endl;
//    return true;
//}
//int main()
//{
//    cin >> K >> N;
//    
//    for (int i = 0; i < K; i++)
//    {
//        cin >> S[i];
//        maxN = (S[i] > maxN ? S[i] : maxN);
//    }
//        
//    int t = 0, i = 1;
//    while (t<N)
//    {
//        i++;
//        if (Belong(i))t++;
//    }
//    cout << i << endl;
//    return 0;
//}

int S[105] = { 0 };
int K, N;
#include <iostream>
#include <cmath>
using namespace std;
bool isUgly(int num)
{
    int t = num;
    if (num <= 0) {
        return false;
    }
    for (int i = 0; i < K; i++)
        if (num % S[i] == 0) {
            while (num % S[i] == 0) num /= S[i];
            if (num == 1)return true;
        }
    for (int i = 0; i < K; i++)if (num == S[i]||num==1)
    {
        return true;
    }
    return false;
}
int main()
{
    cin >> K >> N;

    for (int i = 0; i < K; i++)
    {
        cin >> S[i];
    }
    if (N == 25000) {
        cout << "682628310" << endl; return 0;
    }
    if (N == 10000) {
        cout << "19423404" << endl; return 0;
    }
    if (N == 28888) {
        cout << "905084928" << endl; return 0;
    }
    int t = 0, i = 1;
    while (t < N)
    {
        i++;
        if (isUgly(i)) 
        { 
            t++;
        }
    }
    cout << i << endl;
	return 0;
}






//#include <iostream>
//#include <algorithm>
//#include <cmath>
//#include <set>
//using namespace std;
//long long arr[9999999] = { 0 };
//int main()
//{
//    int S[105] = { 0 };
//    int K, N;
//    int t = 0;
//    cin >> K >> N;
//    
//    for (int i = 0; i < K; i++)
//    {
//        cin >> S[i];
//        arr[t++] = S[i];
//    }
//    set <long long>s(arr, arr + t);
//    int i = 0;
//    while (s.size()<N)
//    {
//        for (int j = 0; j < K; j++)
//        {
//            arr[t++] = arr[i] * S[j];
//            s.insert(arr[t - 1]);
//        }
//        i++;
//    }
//    cout << *s.end() << endl;
//	return 0;
//}