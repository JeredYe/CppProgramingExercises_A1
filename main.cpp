#include <cmath>
#include <random>
#include <iostream>
using namespace std;
/// <summary>
//�����㷨
/// </summary>
/// <returns></returns>
int main()
{
	srand(time(NULL));
	int Array[20] = { 0 };
	for (int i = 0; i < 20; i++)
	{
		Array[i] = rand() % 999;
	}
	for (int i = 0; i < 20; i++)cout << Array[i] << " ";
	cout << "����ԭ��������";
	cout << endl;
	//for (int i = 0; i < 20; i++)
	//{
	//	for (int j = 0; j < 20 - i; j++)
	//	{
	//		if (Array[j] < Array[j + 1])
	//		{
	//			int buffer = Array[j];
	//			Array[j] = Array[j + 1];
	//			Array[j + 1] = buffer;
	//		}
	//	}
	//}////////ð������9.27-2 Ҷ�쿡 221310623

	for (int i = 0; i < 20; i++)
	{
		int* min = &Array[i];
		for (int j = 0; j < 20; j++)
		{
			if (*min > Array[j])
			{
				int buffer = Array[j];
				Array[j]=*min;
				*min = buffer;
			}
		}
	}/////////ѡ������9.27-3 Ҷ�쿡 221310623


	for (int i = 0; i < 20; i++)cout << Array[i] << " ";
	return 0;
}