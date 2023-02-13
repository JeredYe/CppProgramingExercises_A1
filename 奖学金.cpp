// 奖学金.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
/*
#include <iostream>
using namespace std;
struct Student
{
    char Name[64];
    int MarkA, MarkB, Paper;
    char Leader, West;
    int sum = 0;
};
int main()
{
    int n;
    while (cin >> n)
    {
        Student Students[100];
        int total = 0, maxIndex = 0,max=0;
        for (int i = 0; i < n; i++)
        {
            cin >> Students[i].Name >> Students[i].MarkA >> Students[i].MarkB >> Students[i].Leader >> Students[i].West>> Students[i].Paper;
            if (Students[i].MarkA > 80 && Students[i].Paper >= 1)Students[i].sum += 8000;
            if (Students[i].MarkA > 85 && Students[i].MarkB > 80)Students[i].sum += 4000;
            if (Students[i].MarkA > 90 )Students[i].sum += 2000;
            if (Students[i].West =='Y'&& Students[i].MarkA > 85)Students[i].sum += 1000;
            if (Students[i].Leader == 'Y' && Students[i].MarkB > 80)Students[i].sum += 850;
            total += Students[i].sum;
            if (Students[i].sum > max)
            {
                max = Students[i].sum;
                maxIndex = i;
            }
        }
        cout << Students[maxIndex].Name << endl;
        cout << Students[maxIndex].sum << endl;
        cout << total << endl<<endl;

    }

    return 0;
}
*/

///名字，期末平均成绩，班级评议成绩，是否是学生干部，是否是西部省份学生，以及发表的论文数
//1. 院士奖学金：每人8000元，期末平均成绩高于80分，并且在本学期内发表1篇或1篇以上论文的学生均可获得。
//
//2. 五四奖学金：每人4000元，期末平均成绩高于85分，并且班级评议成绩高于80分的学生均可获得。
//
//3. 成绩优秀奖：每人2000元，期末平均成绩高于90分的学生均可获得。
//
//4. 西部奖学金：每人1000元，期末平均成绩高于85分的西部省份学生均可获得。
//
//5. 班级贡献奖：每人850元，班级评议成绩高于80分的学生干部均可获得。

#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    char ch;
    int count = 0;
    cout << "Please input a string:\n";
    ch = cin.get();
    while (ch != '\n')
    {
        if ('A' <= ch&&ch <= 'Z' || 'a' <= ch&&ch <= 'z')
            count++;
        ch = cin.get();
    }
    cout << "English letter count is:" << count << endl;
    return 0;
}
