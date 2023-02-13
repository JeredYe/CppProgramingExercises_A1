// 总分.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

//#include <iostream>
//#include <vector>
//using namespace std;
//int N, M;
//struct Exercise
//{
//    int Time = 0, Score = 0;
//};
//Exercise arr[256];
//Exercise Arrangement[256];
//int countN = 0, maxscore = 0, sumtime = 0;
//void DFS()
//{
//    int t = 0, sum = 0;
//    for (int i = 0; i < countN; i++)
//    {
//        t += Arrangement[i].Time;
//        sum += Arrangement[i].Score;
//    }
//    if (t > M)return;
//    else
//        maxscore = (sum > maxscore ? sum : maxscore);
//
//    for (int i = 0; i < N; i++)
//        if(sumtime+ arr[i].Time < M)
//    {
//        Exercise empty;
//        Arrangement[countN++] = arr[i];
//        sumtime += arr[i].Time;
//        DFS();
//        sumtime -= arr[i].Time;
//        Arrangement[--countN] = empty;
//    }
//
//}
//
//
//int main()
//{
//    cin >> M >> N;
//    for (int i = 0; i < N; i++)
//        cin >> arr[i].Score >> arr[i].Time;
//    DFS();
//    cout << maxscore << endl;
//    return 0;
//}

#include<iostream>
using namespace std;
const int M = 10001, N = 10001;
int m, n, Time[N], Score[N], f[M];
#define max(a,b)(a>b?a:b)
int main()
{
    cin >> m >> n;
    for (int i = 1; i <= n; i++)
        cin >> Score[i] >> Time[i];
    for (int i = 1; i <= n; i++)
        for (int v = Time[i]; v <= m; v++)
            f[v] = max(f[v], f[v - Time[i]] + Score[i]);
    cout << f[m] << endl;
}