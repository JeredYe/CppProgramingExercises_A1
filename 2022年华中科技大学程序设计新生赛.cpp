// 2022年华中科技大学程序设计新生赛.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
/*
* using namespace std;
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <vector>
#include <string>
int main()
{


    return 0;
}

*/
///Monster Killer
//using namespace std;
//#include <iostream>
//#include <algorithm>
//#include <cstdio>
//#include <cstdlib>
//#include <cstring>
//#include <vector>
//#include <string>
//#include <random>
//bool P(int p)
//{
//    int rnd = rand() % 100;
//    return rnd < p;
//}
//int main()
//{
//    int n, a[256] = { 0 }, x[256] = { 0 }, m = 0;
//    double times = 0;
//    //a血量 p概率
//    cin >> n;
//    for (int i = 0; i < n; i++)
//    {
//        cin >> a[i] >> x[i];
//    }
//    for (int i = 0; i < n; i++)
//    {
//        while (m < a[i])
//        {
//            times++;
//            if (P(x[i]))m++;
//        }
//        if (m == a[i])
//        {
//            times++;
//            continue;
//        }
//        if (m > a[i])
//        {
//            times++;
//            if (P(x[i]))m--;
//            continue;
//        }
//    }
//    return 0;
//}
// 



//	Merging Stones

//#include <iostream>
//#include <algorithm>
//using namespace std;
//unsigned long long n, arr[131072] = { 0 };
//bool com(int a, int b)
//{
//    return a > b;
//}
//int main()
//{
//    cin >>n;
//    for (int i = 0; i < n; i++)cin >> arr[i];
//    sort(arr, arr + n, com);
//    long long score = 0;
//    for (int i = 0; i < n; i++)
//    {
//        score += arr[i] * arr[i + 1];
//        arr[i + 1] += arr[i];
//    }
//    std::cout << score << endl;
//    return 0;
//}


//Phigros

//#include <iostream>
//#include <string>
//using namespace std;
//int abso(int num)
//{
//    return (num >= 0 ? num : -num);
//}
//int round(int x)
//{
//    if (x < abso(x) + 0.5)return abso(x);
//    else return abso(x) + 1;
//}
//int main()
//{
//    int n, k;
//    cin >> n >> k;
//    int rest = n - k, scores = 0,combo=0;
//    int m = 0;
//    while (k--)
//    {
//        string str;
//        cin >> str;
//        if (str.compare("perfect") == 0) { scores += round(900000 / n); m++; }
//        else if (str.compare("good") == 0) {scores += round(585000 / n); m++; }
//        else { if (m > combo)combo = m; m = 0; }
//    }
//    scores += round(900000 / n * rest);
//    if (m + rest > combo)combo = m + rest;
//    if(combo>1)scores += round(combo * 100000 / n);
////    if (scores % 10 > 5)scores += (10 - scores % 10);
//    cout << scores << endl;
//    return 0;
//}




//	Substrings
//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//    int n;
//    cin >> n;
//    string str;
//    cin >> str;
//    int count = 0;
//    for (int i = 0; i < n; i++)
//        if (str.substr(i, 3).compare("fyt") == 0)
//            count++;
//    cout << count << endl;
//    return 0;
//}



//Roll the Circle
        //if (a >= b)
        //{
        //    timesi = a / b;
        //    a %= b;
        //    if (a)
        //    {
        //        while (true)
//        {
//            bool exist = false;
//            for (j = 1; j < i; j++)
//                if (double(a) == (double)(j * b / i)) { exist = true; break; }
//            if (exist)break; else i++;
//        }
//    }
//    j += timesi * i;
//}
//else
//{
//    int rb = b;
//    timesi = b / a;
//    b %= a;
//    if (b)
//    {
//        while (true)
//        {
//            bool exist = false;
//            for (j = 1; j < i; j++)
//                if (double(rb - b) == (double)(j * rb / i)) { exist = true; break; }
//            if (exist)break; else i++;
//        }
//        
//    }
//    j += timesi * i;
//}
//

//#include <iostream>
//using namespace std;
//int main()
//{
//    int n;
//    cin >> n;
//    while (n--)
//    {
//        unsigned long long a, b,r=0;
//        cin >> a >> b;
//        unsigned long long aa = a, bb = b;
//        while (true)
//        {
//            r = a % b;
//            if (r == 0)break;
//            else { a = b; b = r; }
//        }
//        aa /= b; bb /= b;
//        aa += bb;
//        cout << aa << "/" << bb << endl;
//    }
//    return 0;
//}
// 
// 
//long long a, b;
//cin >> a >> b;
//int timesint = 0;
//double endtime = 0;
//long long ra = 0, rb = 0;
//int i = 1, j = 1;//ifenmu jfenzi
//do
//{
//    if (ra + b <= a||timesint==0)
//    {
//        ra += b;
//        rb += b;
//        timesint++;
//    }
//    else
//    {
//        if(a>=b)
//        while (true)
//        {
//            bool exist = false;
//            for (j = 1; j < i; j++)
//                if (double(a - (ra % a)) == (double)(j * b / i)) {exist = true; break;}
//            if (exist)break; else i++;
//        }
//        else
//        {
//            while (true)
//            {
//                bool exist = false;
//                for (j = 1; j < i; j++)
//                    if (double(rb-(rb%a)) == (double)(j * b / i)) { exist = true; break; }
//                if (exist)break; else i++;
//            }
//        }
//        break;
//    }

//} while (ra % a != 0);
//j += i * timesint;


// String Problem
//#include <string>
//#include <iostream>
//#include <cstring>
//using namespace std;
//string getReverse(string origin)
//{
//    string str;
//    for (int i = origin.length(); i >= 0; i--)
//        str.append(origin.substr(i, 1));
//    return str;
//}
//int main()
//{
//    int n, m;
//    cin >> n >> m;
//    string s, t;
//    cin >> s >> t;
//    int len = 0;
//    for (int i = 1; i <= m; i++)
//    {
//        string reT = getReverse(t.substr(0, i)) + t.substr(i, t.length() - i);
//        for (int j=1;j<reT.length(); j++)
//        if(j>len&& strstr(s.c_str(),reT.substr(0, j).c_str()))len=j;
//    }
//    cout << len << endl;
//    return 0;
//}



//Walk Alone has a conjecture
//#include <iostream>
//#include <math.h>
//#define ull unsigned long long
//using namespace std;
//bool isPrime(ull num)
//{
//    if (num == 2)return true;
//    for (int i = 2; i <= sqrt(num); i++)
//        if (num % i == 0)return false;
//    return true;
//}
//int getNum(ull num)
//{
//    int count = 0;
//    for (int i = 2; i <= num; i++)
//    {
//        if (isPrime(i) && num % i == 0)count++;
//    }
//    return count;
//}
//int main()
//{
//    ull a,n;
//    cin >> a;
//    while (a--)
//    {
//        cin >> n;
//        for (ull i = n;; i++)
//        {
//            ull a = getNum(i),b= getNum(i+n);
//            if (a==b)
//            {
//                cout << i << " " << i+n << endl;
//                break;
//            }
//        }
//    }
//    return 0;
//}


#include <iostream>
using namespace std;
int main()
{
    
    int n;
    while (cin >> n)//输入多组数据
    {
        int nums[100] = { 0 }, times[100] = { 0 }, count = 0;
        int prev = 0;//用于存储上一个数字
        while(n--)//循环n次
        {
            int t;
            cin >> t;//输入一个数
            if (prev != t)//如果与之前那个数不同（断开）
            {
                nums[count] = t;//输入新的情况
                times[count++] = 1;
                prev = t;//将"先前的"数字改成这个，以便下次判断
            }
            else times[count-1]++;//如果跟上一个数字相同那就次数++
        }
        int maxi = 0;
        for (int i = 0; i < count; i++)
            maxi = (times[i] > times[maxi] ? i : maxi);//查找最大下标
        cout << nums[maxi]<<" "<<times[maxi] << endl;//输出
    }

    return 0;
}