// 选票统计.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <cstring>
using namespace std;
struct Candidate
{
    char Name[16]={0};
    int vote = 0;
    Candidate* next = NULL;

};
int main()
{
    Candidate candidate[100]={NULL};
    int n = 0;
    char name[16];
    while (cin >> name)
    {
        bool FOUND = false;
        for (int i = 0; i < strlen(name); i++)name[i] = (name[i] >= 'A' && name[i] <= 'Z' ? name[i] + 32 : name[i]);
        Candidate* seek = &candidate[0];
        for(int i=0;i<n;i++)
        {
            if (!strcmp(name, seek->Name))
            {
                FOUND = true;
                seek->vote++;
                break;
            }
            seek = seek->next;
        }
        if (!FOUND)
        {
            strncpy(candidate[n].Name, name, strlen(name));
            candidate[n].vote++;
            candidate[n].next = &candidate[n + 1];
            n++;
        }
    }
    Candidate* max, *seek;
    seek = &candidate[0];
    max = seek;
    for (int i = 0; i < n; i++)
    {
        if (seek->vote > max->vote)max = seek;
        seek = seek->next;
    }
    cout << max->Name << " " << max->vote << endl;
    return 0;
}
