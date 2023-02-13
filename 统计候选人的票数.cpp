// 统计候选人的票数.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <cstring>
using namespace std;
struct Candidate
{
    const char* Name=NULL;
    int vote = 0;
    Candidate* next=NULL;

};

int main()
{
    Candidate li, zhang, wang;
    li.Name = "li";
    zhang.Name = "zhang";
    wang.Name = "wang";
    li.next = &zhang;
    zhang.next = &wang;
    wang.next = NULL;
    int n = 10;
    char name[16];
    int wr = 0;
    while (n--)
    {
        cin >> name;
        Candidate* seek = &li;
        bool WRONG = true;
        
        while (seek)
        {
            seek->vote += (!strcmp(name,seek->Name) ? 1 : 0);
            WRONG =(WRONG?strcmp(name, seek->Name):false);
            seek = seek->next;
        }
        wr += (WRONG ? 1 : 0);
    }
    cout << li.Name<< ":" << li.vote << endl;
    cout << zhang.Name << ":" << zhang.vote << endl;
    cout << wang.Name << ":" << wang.vote << endl;
    cout << "Wrong election:" << wr << endl;
    return 0;
}
