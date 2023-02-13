// 学生选拔.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <cstring>
#include <string>
using namespace std;
struct Student
{
    char Name[32] = { 0 };
    int Ch = 0, Ma = 0, En = 0;
    bool Selected = false;
    bool SingleSelected[3] = {false};
};
void Swap(string* A, string* B)
{
    string buf = *A;
    *A = *B;
    *B = buf;
}
int main()
{
    int n, m;
    while (cin >> n >> m)
    {
        Student Students[1000];
        for (int i = 0; i < n; i++)
            cin >> Students[i].Name >> Students[i].Ch >> Students[i].Ma >> Students[i].En;
        Student Tmp;
        Tmp.Ch = Tmp.Ma = Tmp.En = -1;
        int count = 0;
        string List[1000];
            for (int i = 0; i < m; i++)
            {
                Student* pmax[3] = { &Tmp,&Tmp, &Tmp };
                for (int i = 0; i < n; i++)
                {
                    if (!Students[i].SingleSelected[0] && Students[i].Ch > pmax[0]->Ch)pmax[0] = &Students[i];
                    if (!Students[i].SingleSelected[1] && Students[i].Ma > pmax[1]->Ma)pmax[1] = &Students[i];
                    if (!Students[i].SingleSelected[2] && Students[i].En > pmax[2]->En)pmax[2] = &Students[i];
                }
                    //if (!Students[i].Selected)
                    //{

                    //}
                for (int i = 0; i < 3; i++)
                {
                    if (!pmax[i]->Selected)
                    {
                        List[count++] = pmax[i]->Name;
                    }
                    pmax[i]->Selected = true;
                    pmax[i]->SingleSelected[i] = true;
                }
            }
       for (int i=0;i<count;i++)
           for (int j = 1; j < count; j++)
               if (strcmp(List[j - 1].c_str(), List[j].c_str())>0)
                   Swap(&List[j - 1], &List[j]);
       for (int i = 0; i < count; i++)
           cout << List[i] << endl;
       cout << endl;
    }
    return 0;
}

