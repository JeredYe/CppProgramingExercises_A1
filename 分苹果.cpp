// 分苹果.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

//#include <iostream>
//using namespace std;
//int Arr[1000000] = { 0 };
//int main()
//{
//    int N, M;
//    cin >> N >> M;
//    int Li = 0, Ri = 0, Ci = 0;
//    while(M--)
//    {
//        cin >> Li >> Ri >> Ci;
//        if(Ci)
//        for (int i = Li; i <= Ri; i++)
//            Arr[i] += Ci;
//    }
//    cout << Arr[1];
//    for (int i = 2; i <= N; i++)
//        cout << " " << Arr[i];
//    cout << endl;
//    return 0;
//}
// 
// 
//#include <iostream>
//using namespace std;
//int Arr[100000][3] = { 0 };
//int main()
//{
//	int N, M,count = 0;
//	cin >> N >> M;
//	for (int i = 1; i <= M; i++)
//	{
//		int Li = 0, Ri = 0, Ci = 0;
//		cin >> Li >> Ri >> Ci;
//		bool New = true;
//		int maxj = 0;
//		for (int j = 0; j < count; j++)
//			if (Arr[j][0] <= Li && Arr[j][1] >= Ri)
//			{
//				if (Arr[j][1] - Arr[j][0] > Arr[maxj][1] - Arr[maxj][0])maxj = j;
//				New = false;
//			}
//		if (New) {
//			Arr[count][0] = Li;
//			Arr[count][1] = Ri;
//			Arr[count][2] = Ci;
//			count++;
//		}
//		else
//		{
//			Arr[maxj][2] += Ci;
//			if (Li - Arr[maxj][0])
//			{
//				Arr[count][0] = Li;
//				Arr[count][1] = Arr[maxj][0] - 1;
//				Arr[count][2] = Ci;
//				count++;
//			}
//			if (Arr[maxj][1] - Ri)
//			{
//				Arr[count][0] = Arr[maxj][1] + 1;
//				Arr[count][1] = Ri;
//				Arr[count][2] = Ci;
//				count++;
//			}
//		}
//	}
//	for (int i = 1; i <= N; i++)
//	{
//		int sum = 0;
//		for (int j = 0; j <= count; j++)if (i >= Arr[j][0] && i <= Arr[j][1])sum += Arr[j][2];
//		cout << sum << (i != N ? " " : "");
//	}
//	cout << endl;
//	return 0;
//}
#include <iostream>
using namespace std;
int Arr[100000] = { 0 };
int main()
{
	int N, M;
	cin >> N >> M;
	while (M--)
	{
		int Li, Ri, Ci;
		cin >> Li>> Ri>> Ci;
		Arr[Li] += Ci; Arr[Ri+1] -= Ci;
	}
	int count = 0;
	for (int i = 1; i <= N; i++)
	{
		count += Arr[i];
		cout << count << " ";
	}
	cout << endl;
	return 0;
}