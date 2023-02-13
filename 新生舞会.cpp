// 新生舞会.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
struct Student
{
    char Name[16] = { 0 },Gender=0;
    int id;
};
bool IsNum(char str[])
{
    for (int i = 0; i < strlen(str); i++)
        if (str[i] < '0' || str[i]>'9')return 0;
    return 1;
}
int main()
{
    int n,m;
    cin >> n;
    Student Arr[1000];
    for (int i = 0; i < n; i++)
        cin >> Arr[i].Name >> Arr[i].id >> Arr[i].Gender;
    cin >> m;
    while (m--)
    {
        char A[16], B[16],GA=0,GB=0;
        cin >> A >> B;
        if (IsNum(A))
        {
            int id = atoi(A);
            for (int i = 0; i < n; i++)if (id == Arr[i].id)GA = Arr[i].Gender;
        }
        else
            for (int i = 0; i < n; i++)if (strcmp(Arr[i].Name,A)==0)GA = Arr[i].Gender;
        if (IsNum(B))
        {
            int id = atoi(B);
            for (int i = 0; i < n; i++)if (id == Arr[i].id)GB = Arr[i].Gender;
        }
        else
            for (int i = 0; i < n; i++)if (strcmp(Arr[i].Name, B) == 0)GB = Arr[i].Gender;
        cout << (GA != GB ? "Y" : "N") << endl;
    }
    return 0;
}
