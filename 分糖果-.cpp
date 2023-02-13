// 分糖果-.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
//int pow(int num)
//{
//    int i = 1;
//    while (num--)i *= 2;
//    return i;
//}
//int PaSum(string a, string b) {
//    //注意，是相反的
//    int sum = 0;
//    int c[256] = { 0 };
//    for (int i = 0; i < max(a.length(), b.length()); i++)
//    {
//        if (a[i] == '0' && b[i] == '0')c[i] += 0;
//        if (a[i] == '0' && b[i] == '1')c[i] += 1;
//        if (a[i] == '1' && b[i] == '0')c[i] += 1;
//        if (a[i] == '1' && b[i] == '1')
//        {
//            c[i] += 0;
//            if (i <= 1)
//            {
//                c[i + 1]++;
//            }
//        }
//    }
//    for (int i = 0; i <= max(a.length(), b.length()); i++)
//        if (c[i] > 1) {
//            c[i + 1]++; c[i] = 0;
//        }
//}



//
//#include <iostream>
//#include <string>
//#include <cstring>
//#include <vector>
//#define min(a,b)(a<b?a:b)
//using namespace std;
//
//string XOR (string a, string b)
//{
////    int la = a.length(), lb = b.length();
//    if (a[0] == '1' && b[0] == '1')
//    {
//        a[0]--;
//        b[0]--;
//        a[1]++;
//    }
//    if (a[1] == '2') { a[1] = '0'; a[2]++; }
//    if (a[1] == '1' && b[1] == '1')
//    {
//        a[1]--;
//        b[1]--;
//        a[2]++;
//    }
//    if (a[2] == '2') { a[2] = '0'; a[3]++; }
//    string str;
//    for (int i = 0; i < min(a.length(), b.length()); i++)
//    {
//        str.append(a[i] == b[i] ? "0" : "1");
//    }
//    if (a.length() > b.length())
//        str.append(a.substr(b.length(), a.length()- b.length()));
//    else
//        str.append(a.substr(a.length(), b.length() - a.length()));
//    return str;
//}
//string toB(int num)
//{
//    
//    char arr[256] = { 0 },arr2[256]={0};
//    int count = 0;
//    while (num)
//    {
//        arr[count++] = '0'+num % 2;
//        num /= 2;
//    }
////    for (int i = 0; i < count; i++)arr2[i]=(arr[count - 1 - i]);
//    string str(arr);
//    return str;
//}
//int main()
//{
//    int n;
//    cin >> n;
//    cin.get();
//    while (n--)
//    {
//        string str;
//        int arr[256] = { 0 }, count = 0;
//        getline(cin, str);
//        str.append(" ");
//        while (str.length())
//        {
//            arr[count++] = atoi(str.substr(0, str.find(" ")).c_str());
//            str.erase(0, str.find(" ") + 1);
//        }
//        for (int i = 0; i < count; i++)
//            for (int j = 1; j < count; j++)
//                if (arr[j - 1] < arr[j])
//                {
//                    int t = arr[j - 1];
//                    arr[j - 1] = arr[j];
//                    arr[j] = t;
//                }
//        string sum = toB(arr[0]);
//        for (int i = 1; i < count; i++)
//            sum = XOR(sum, toB(arr[i]));
//        bool exist = true;
//        for(int i=2;i<sum.length();i++)
//            if (sum[i] != '0'&& sum[i] != '2') { exist = false; break; }
//        if (!exist)cout << "NO" << endl;
//        else
//        {
//            int value = 0;
//            for (int i = 0; i < count / 2; i++)
//                value += arr[i];
//            cout << value << endl;
//        }
//    }
//    return 0;
//}



#include <iostream>
#define min(a,b)(a<b?a:b)
using namespace std;
int main()
{
	int n;
	cin >> n;
	while (n--)
	{
		int N;
		cin >> N;
		int sum = 0,min=32767;
		int bsum = 0;
		while (N--)
		{
			int t;
			cin >> t;
			sum += t;
			min = min(min, t);
			if (!bsum)bsum = t;
			else bsum ^= t; 
		}
		if (bsum)cout << "NO" << endl;
		else cout << sum - min << endl;
	}
	return 0;
}