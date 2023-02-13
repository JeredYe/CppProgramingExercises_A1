// 贪婪的礼物送礼者.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
//
#include <iostream>
#include <cstring>
#include <string>
#include <vector>
using namespace std;
struct People
{
    string Name;
    int sum = 0;
};
int main()
{
    int NP;
    vector <People> Peoples;
    cin >> NP;
    for (int i = 0; i < NP; i++)
    {
        People temp;
        cin >> temp.Name;
        Peoples.push_back(temp);
    }
    string tmpname;
    for(int i=0;i<NP;i++)
    {
        cin >> tmpname;
        People* pPeople = NULL;
        for (int i = 0; i < NP; i++)
            if (tmpname.compare(Peoples[i].Name) == 0)
            {
                pPeople = &Peoples[i];
                break;
            }
        if (pPeople)
        {
            int singleMoney = 0, NGi = 0;
            cin >> singleMoney >> NGi;
            pPeople->sum -= singleMoney;
            if (NGi)
            {
                pPeople->sum += (singleMoney % NGi);
                for(int i=0;i<NGi;i++)
                {
                    string receiver;
                    cin >> receiver;
                    for (int i = 0; i < NP; i++)
                        if (receiver.compare(Peoples[i].Name) == 0)
                        {
                            Peoples[i].sum += singleMoney / NGi;
                            break;
                        }
                }
            }
            else pPeople->sum += singleMoney;
        }
    }
    for (int i = 0; i < NP; i++)
        cout << Peoples[i].Name << " " << Peoples[i].sum << endl;

    return 0;
}
//#include <iostream>
//using namespace std;
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		int nums[256] = { 0 }, times[256] = { 0 }, count = 0;
//		for (int i = 0; i < n; i++)
//		{
//			int t;
//			cin >> t;
//			bool New = true;
//			int j = 0;
//			for (; j < count; j++)
//				if (nums[j] == t) {
//					New = false;
//					break;
//				}
//			if (New)
//			{
//				nums[count] = t;
//				times[count++] = 1;
//			}
//			else times[j]++;
//		}
//		for (int i = 0; i < count; i++)
//			if (times[i] == 1) {
//				cout << nums[i] << endl;
//				break;
//			}
//	}
//}