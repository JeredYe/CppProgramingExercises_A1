//// 求平均成绩.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
////
//
//#include <stdio.h>
//#define N 8
//
//typedef struct
//{   char num[11];
//    double s[N];
//    double ave;
//}STREC;
//
// 
//
//void fun(STREC *p)
//{
//    p->ave = 0;
//    for (int i = 0; i < N; i++)p->ave += p->s[i];
//    p->ave /= N;
//}
//
//int main()
//{   STREC s={"GA005",85.5,76,69.5,85,91,72,64.5,87.5};
//    int i;
//    scanf("%s",s.num);
//    for(i=0; i<N; i++)
//    {
//        scanf("%lf",&s.s[i]);
//    }
//    fun(&s);
//    printf("%s:%7.3f\n",s.num,s.ave);
//    return 0;
//}
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    int a, b, c;
    double x, y;
    cin >> a >> b >> c;
    x = ( - b + sqrt(b * b - 4 * a * c)) / (2 * a);
    y = ( - b - sqrt(b * b - 4 * a * c)) / (2 * a);
    cout << fixed << setprecision(2) << x <<" " << y << endl;
    return 0;
}