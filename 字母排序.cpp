// 字母排序.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#define NUM 256
using namespace std;
int main()
{
	char Array[NUM]={0};
	cin >> Array;
	for (int i = 0; i < NUM; i++)
	{
		for (int j = 1; j < NUM-i; j++)
		{
			
			if (Array[j-1] > Array[j])
			{
				char buffer = Array[j-1];
				Array[j-1] = Array[j];
				Array[j] = buffer;
			}
		}

	}
	for (int i = 0; i < NUM; i++)if(Array[i]!=0)cout << Array[i];
	return 0;
}
//char a, b, c;
//cin >> a >> b >> c;
//int i = 3;
//while (i--)
//{
//	if (a < b && a < c) {
//		cout << a;
//		a = 127;
//	}
//	if (b < a && b < c) {
//		cout << b;
//		b = 127;
//	}
//	if (c < a && c < b) {
//		cout << c;
//		c = 127;
//	}
//}
//cout << endl;