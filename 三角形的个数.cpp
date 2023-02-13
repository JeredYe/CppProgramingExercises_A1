// 三角形的个数.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#define max(a,b,c) (a>=b&&a>=c?a:(b>=a&&b>=c?b:c))
#define min(a,b,c) (a<=b&&a<=c?a:(b<=a&&b<=c?b:c))
#define mid(a,b,c) ( ((a>=b&&c>=a)||(a<=b&&c<=a))?a:((a>=b&&b>=c)||(a<=b&&b<=c))?b:c)
using namespace std;
bool judge(int Arr[])
{
    return (Arr[0] + Arr[1] > Arr[2] && Arr[0] + Arr[2] > Arr[1] && Arr[2] + Arr[1] > Arr[0]);
}
bool Compare(int Arr[], int a,int b,int c)
{
    if(Arr[0]!=a||Arr[1]!=b||Arr[2]!=c)return false;
    return true;
}
int main()
{
    int n;
    while (cin >> n)
    {
        int count = 0,Arr[1024][3]={0},result=0;
        for (int i = 1; i <= n-2; i++)
        {
            for (int j = i+1; j <= n-1; j++)
            {
                int a = min(i, j - i, n - j),
                b = mid(i, j - i, n - j),
                c = max(i, j-i, n-j);
                bool New = true;
                if ((a == b || a == c || b == c)||(a+b+c!=n))New = false;
                else for (int i = 0; i < count; i++)if (Compare(Arr[i], a, b, c)) {
                    New = false;
                    break;
                }
                if (New)
                {
                    Arr[count][0] = a, Arr[count][1] = b, Arr[count][2] = c;
                    count++;
                }
            }
        }
        for (int i = 0; i < count; i++)if (judge(Arr[i]))result++;
        cout << result << endl;
    }
    return 0;
}


//#include<iostream>
//using namespace std;
//int main()
//{
//    int y, m, d, t;
//    cin >> y >> m >> d >> t;
//    int addy= (m + t) / 12;
//    y += addy;
//    m = m + t - addy * 12;
//    int a = d;
//    switch (m)
//    {
//    case 1:
//    case 3:
//    case 5:
//    case 7:
//    case 8:
//    case 10:
//    case 12:break;
//    case 4:
//    case 6:
//    case 9:
//    case 11:a = 30; break;
//    case 2:a = (!(y % 400) || (!(y % 4) && (y % 100)) ? 29 : 28); break;
//    }
//    cout << y << " " << m << " " << a << endl;
//    return 0;
//}