// 行驶范围.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
struct Road
{
    int CityA, CityB, distance;
};
Road Roads[1000000];
void Swap(Road Arr[], int a, int b)
{
    Road buf = Arr[a];
    Arr[a] = Arr[b];
    Arr[b] = buf;
}
bool Access[1000000] = { false };
int main()
{
    int n, m;
    while (cin >> n >> m)
    {
        if (!n && !m)break;
        if (m == 0)
        {
            cout << "IMPOSSIBLE" << endl;
        }
        else
        {
            for (int i = 0; i < m; i++)
            {
                int a, b;
                cin >> a >> b >> Roads[i].distance;
                Roads[i].CityA = (a < b ? a : b);
                Roads[i].CityB = (a > b ? a : b);
            }
            for (int i = 0; i < m; i++)///最优路径
            {
                int a = Roads[i].CityA, b = Roads[i].CityB, d = Roads[i].distance;
                for (int j = i + 1; j < m; j++)
                    if (Roads[j].CityA == a && Roads[j].CityB == b)
                    {
                        for (int k = (Roads[j].distance >= d ? j : i); k <= m; k++)
                            Roads[k] = Roads[k + 1];
                        m--;
                    }
            }
            for (int i = 0; i < m; i++)///冒泡排序
                for (int j = 1; j < m - i; j++)
                    if (Roads[j - 1].CityA > Roads[j].CityA || Roads[j - 1].CityA == Roads[j].CityA && Roads[j - 1].CityB > Roads[j].CityB)Swap(Roads, j - 1, j);

            Access[0] = true;
            for (int i = 0; i < m; i++)
                if (Access[i])
                    Access[Roads[i].CityB] = true;
            bool EXIST = true;
            for (int i = 0; i < n; i++)
                if (!Access[i])
                {
                    cout << "IMPOSSIBLE" << endl;
                    EXIST = false;
                }
            if (EXIST)
            {
                int minn = 10000;
                for (int i = 0; i < m; i++)
                {
                    int suma = 0, sumb = 0, maxn = 0;
                    for (int j = 0; j <= i; j++)
                        suma += Roads[j].distance;
                    for (int j = i + 1; j < m; j++)
                        sumb += Roads[j].distance;
                    maxn = (suma > sumb ? suma : sumb);
                    minn = (maxn < minn ? maxn : minn);
                }
                cout << minn << endl;
            }
        }
        for (int i = 0; i < m; i++)Access[m] = false;
    }
    return 0;
}
