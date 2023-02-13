// 实数相加.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//


#include <iostream>
#include <cstring>
using namespace std;
#define max(a,b) (a>b?a:b)
int main()
{
    char str1[202] = { 0 }, str2[202] = { 0 }, ans[2][101] = {0};
    cin >> str1 >> str2;
    int count = 0, len[4] = { 0 };//0:str1_1 1:str1_2...etc
    int dotI = 0;


    for (int i = 0; i < strlen(str1); i++)if (str1[i] == '.') { dotI = i; break; }
    if (dotI)
    {
        for (int i = 0; i < dotI; i++)
            ans[0][count++] += str1[dotI - 1 - i] - '0';
        len[0] = count;
        count = 0;
        for (int i = 0; i < strlen(str1)-dotI-1; i++)
            ans[1][count++] += str1[dotI+i+1] - '0';
        len[1] = count;
        count = 0;
    }
    else
    {
        for (int i = 0; i < strlen(str1); i++)
            ans[0][count++] += str1[strlen(str1) - 1 - i] - '0';
        len[0] = count;
    }
    count = 0;

    dotI = 0;
    for (int i = 0; i < strlen(str2); i++)if (str2[i] == '.') { dotI = i; break; }
    if (dotI)
    {
        for (int i = 0; i < dotI; i++)
            ans[0][count++] += str2[dotI - 1 - i] - '0';
        len[2] = count;
        count = 0;
        for (int i = 0; i < strlen(str2) - dotI-1; i++)
            ans[1][count++] += str2[dotI + i+1] - '0';
        len[3] = count;
        count = 0;
    }
    else
    {
        for (int i = 0; i < strlen(str2); i++)
            ans[0][count++] += str2[strlen(str2) - 1 - i] - '0';
        len[2] = count;
    }

    count = 0;

    int max1 = max(len[1], len[3]);///小数部分
    if (len[1] || len[3])
    {
        for (int i = 0; i < max1; i++)
        {
            if (ans[1][i] >= 10)
            {
                if (i == 0)
                    ans[0][0] += ans[1][i] / 10;///小数点第一位
                else ans[1][i - 1] += ans[1][i] / 10;
                ans[1][i] %= 10;
                if (i + 1 == max1)max1++;
                i = -1;
            }
        }
        for (int i = 0; i < max1; i++)
        if (ans[1][i] < '0')ans[1][i] += '0';
    }
    int max2 = max(len[0], len[2]);
    for (int i = 0; i < max2; i++)
    {
        if (ans[0][i] >= 10)
        {
            ans[0][i + 1] += ans[0][i] / 10;
            ans[0][i] %= 10;
            if (i + 1 == max2)max2++;
            i = 0;
        }
    }
    for (int i = 0; i < max2; i++)
        if (ans[0][i] < '0')ans[0][i] += '0';
    for (int i = max2 - 1; i >= 0; i--)
        if(ans[0][i])cout << ans[0][i];
    if (len[1] || len[3])
    {
        cout << '.';
        cout << ans[1];
    }
    cout << endl;
    return 0;
}

//以下程序的功能是：将数组的n个元素逆序后存放在原数组中，请改正程序中的错误，使它能得出正确结果。
//程序如下（源代码见“ch5 / invert.cpp”）
//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main()
//{
//    int a[10] = { 9,3,0,4,1,2,5,6 }, n = 8;
//    int i, t;
//    for (i = 0; i < n/2; i++)
//    {
//        t = a[i];
//        a[i] = a[n - i - 1];
//        a[n - i - 1] = t;
//    }
//    for (i = 0; i < n; i++)
//    {
//        cout << setw(4) << a[i];
//    }
//    return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//    int arr[32] = { 0 }, arr2[32] = { 0 };
//    int n, count = 0;
//    cin >> n;
//    while (n--)cin >> arr[count++];
//    for (int i = 0; i < count; i++)
//    {
//        for (int j = 0; j <= i; j++)arr2[i] += arr[j];
//        cout << arr2[i] << " ";
//    }
//    return 0;
//}

//int pow(int n)
//{
//	int r = 1;
//	while (n--)r *= 2;
//	return r;
//}
//#include <iostream>
//using namespace std;
//int main()
//{
//	int n,i=0;
//	cin >> n;
//	while (!(pow(i)<=n&&pow(i+1)>n))i++;
//	cout << i+1 << endl;
//	return 0;
//}