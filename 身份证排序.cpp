// 身份证排序.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//


/*
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
using namespace std;
//if (Array[i] == Standard)
//{
//    if (strtoull(ID[i], NULL, 10) < strtoull(ID[start], NULL, 10))
//        plow = &Array[i]; else if (!plow)i++;
//}
//if (Array[j] == Standard)
//{
//    if (strtoull(ID[j], NULL, 10) > strtoull(ID[start], NULL, 10))
//        phigh = &Array[i]; else if (!phigh)j--;
//}
char ID[100000][19] = { 0 }; int  Birthday[100000] = { 0 };
unsigned long long IDNum[100000] = { 0 };
void Swap(char* a, char* b, int i, int j)
{
    char buf[25] = { 0 };
    for (int i = 0; i < strlen(a); i++)buf[i] = a[i];
    for (int i = 0; i < strlen(b); i++)a[i] = b[i];
    for (int i = 0; i < strlen(a); i++)b[i] = buf[i];
    int buf1 = Birthday[i], buf2 = IDNum[i];
    Birthday[i] = Birthday[j];
    IDNum[i] = IDNum[j];
    Birthday[j] = buf1;
    IDNum[j] = buf2;
}
void Sort(int* Array, int start, int end)///降序排列
{
    int Standard = Array[start];
    int i = start, j = end;
    int* plow = NULL, * phigh = NULL;
    while (j > i)
    {
        if (Array[i] <= Standard)plow = &Array[i]; else if (!plow)i++;
        if (Array[j] >= Standard)phigh = &Array[j]; else if (!phigh)j--;

        if (plow && phigh)
        {
            Swap(ID[i], ID[j],i, j);
            plow = NULL; phigh = NULL;
        }
    }
    if (j != start)
        Sort(Array, start, j - 1);
    if (j != end)
        Sort(Array, j + 1, end);
    return;
}
void ULLSort(unsigned long long* Array, int start, int end)///降序排列
{
    unsigned long long Standard = Array[start];
    int i = start, j = end;
    unsigned long long* plow = NULL, * phigh = NULL;
    while (j > i)
    {
        if (Array[i] - Standard<=0)plow = &Array[i]; else if (!plow)i++;
        if (Array[j] -Standard>=0)phigh = &Array[j]; else if (!phigh)j--;

        if (plow && phigh)
        {
            Swap(ID[i], ID[j],i,j);
            plow = NULL; phigh = NULL;
        }
    }
    if (j != start)
        ULLSort(Array, start, j - 1);
    if (j != end)
        ULLSort(Array, j + 1, end);
    return;
}
int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> ID[i];
        char buf[10] = { 0 };
        for (int m = 0; m < 8; m++)
            buf[m] = ID[i][6 + m];
        Birthday[i] = atoi(buf);
        IDNum[i] = strtoull(ID[i], NULL, 10);
    }

    ULLSort(IDNum, 0, n - 1);
    Sort(Birthday, 0, n - 1);

    for (int i = 0; i < n; i++)cout << ID[i] << endl;
    return 0;
}
*/

//    
//for (int i = 0; i < n; i++)
//{
//    char buf[10] = { 0 };
//    for (int m = 0; m < 8; m++)
//        buf[m]= ID[i][6 + m];
//    Birthday[i] = atoi(buf);
//}

//int start = 0, end = 0;
//for (int i = 0; i < n; i++)
//{
//    if (Birthday[i] == Birthday[i + 1] && 
//        (i > 0 ? Birthday[i] != Birthday[i - 1] : true))
//        start = i;
//    if ((i > 0 ? Birthday[i] == Birthday[i - 1] : true) &&
//        Birthday[i] != Birthday[i + 1])
//    {
//        end = i;
//        ULLSort(IDNum, start, end);
//        start = end = 0;
//    }
//}

//int main()
//{
//    int n;
//    cin >> n;
//
//    for (int i = 0; i < n; i++)
//        cin >> ID[i];
//    for (int i = 0; i < n; i++)
//        for (int j = 1; j < n - i; j++)
//        {
//            char A[9] = { 0 }, B[9] = { 0 };
//            for (int m = 0; m < 8; m++)
//            {
//                A[m] = ID[j - 1][6 + m];
//                B[m] = ID[j][6 + m];
//            }
//            unsigned long long a = atoi(A), b = atoi(B);
//            if (a < b)Swap(ID[j - 1], ID[j]);
//            else if (a == n)
//            {
//                a = atoi(ID[j - 1]); b = atoi(ID[j]);
//                if (a < b)Swap(ID[j - 1], ID[j]);
//            }
//        }
//    for (int i = 0; i < n; i++)cout << ID[i] << endl;
//    return 0;
//}

/*
* 
#include <iostream> 
#include <vector>
#include<algorithm>
using namespace std;
int compare(string a, string b)
{
    string x = a.substr(6, 8);
    string y = b.substr(6, 8);
    if (x != y)
        return x > y;
    else
        return a > b;
    return 0;
}
int main()
{
    int n;
    cin >> n;
    vector<string> str(n);
    for (int i = 0; i < n; i++)
        cin >> str[i];
    sort(str.begin(), str.end(), compare);
    for (int i = 0; i < n; i++)
        cout << str[i] << endl;
    return 0;
}
*/
#include <iostream> 
#include <vector>
#include<algorithm>
using namespace std;
int Compare(string A, string B)
{
    string b1 = A.substr(6, 8),b2=B.substr(6,8);
    if (b1 != b2)
        return (b1 > b2 ? 1 : 0);
    else
        return (A > B ? 1 : 0);
}
int main()
{
    
    int n;
    cin >> n;
    vector<string> List(n);
    for (int i = 0; i < n; i++)cin >> List[i];
    sort(List.begin(), List.end(), Compare);
    for (int i = 0; i < n; i++)
        cout << List[i] << endl;
    return 0;
}

//#include <iostream>
//#include <cstdio>
//#include <cstdlib>
//#include <iomanip>
//using namespace std;
//int main()
//{
//    int Y, M, D, MAXY, MINY, MAXM, MINM, MAXD, MIND, N;
//    cin >> N >> Y >> M >> D;
//    MAXY = MINY = Y;
//    MAXM = MINM = M;
//    MAXD = MIND = D;
//    for (int i = 1; i < N; i++)
//    {
//        cin >> Y >> M >> D;
//        if (Y > MAXY)
//        {
//            MAXY = Y;
//            MAXM = M;
//            MAXD = D;
//        }
//        else if (Y == MAXY)
//        {
//            if (M > MAXM)
//            {
//                MAXY = Y;
//                MAXM = M;
//                MAXD = D;
//            }
//            else if (M == MAXM)
//            {
//                if (D > MAXD)
//                {
//                    MAXY = Y;
//                    MAXM = M;
//                    MAXD = D;
//                }
//            }
//        }
//        if (Y < MINY)
//        {
//            MINY = Y;
//            MINM = M;
//            MIND = D;
//        }
//        else if (Y == MINY)
//        {
//            if (M < MINM)
//            {
//                MINY = Y;
//                MINM = M;
//                MIND = D;
//            }
//            else if (M == MINM)
//            {
//                if (D < MIND)
//                {
//                    MINY = Y;
//                    MINM = M;
//                    MIND = D;
//                }
//            }
//        }
//    }
//    cout << MAXY << " " << MAXM << " " << MAXD << endl;
//    cout << MINY << " " << MINM << " " << MIND << endl;
//    return 0;
//}