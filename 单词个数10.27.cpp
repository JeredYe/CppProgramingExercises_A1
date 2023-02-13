// 单词个数10.27.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<string>
using namespace std;
int main()
{
	string str, temp;
	int n;
	cin >> n;
	cin.get();
	while (n--)
	{
		getline(cin, temp);
		str.append(temp);
		str.append(" ");
	}
	int count = 0, len = str.length();
	for (int i = 1; i < len; i++)
		if (str[i] == ' ' && str[i - 1] == ' ')
		{
			str.erase(i, 1);
			len--;
			i--;
		}
	while (str.length())
	{
		str.erase(0, str.find(" ") + 1);
		count++;
	}
	cout << count << endl;
	return 0;
}


void fun()
{
}