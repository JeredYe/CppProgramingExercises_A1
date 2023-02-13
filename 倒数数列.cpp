// 倒数数列.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <iomanip>
using namespace std;
double total(int n)
{
	double sum = 0;
	for (int i = 1; i < n + 1; i++)
		sum += 1.0 / i;
	return sum;
}
int main() {

	int n;
	cin >> n;
	cout << fixed << setprecision(3) << total(n) << endl;
	return 0;
}

