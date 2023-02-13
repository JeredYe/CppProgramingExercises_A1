// 求高于（等于）平均(编写函数).cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>

#define N 6

typedef struct

{
    char num[10];

    double s;

} STREC;

double fun(STREC* a, STREC* b, int* n)

{
    int amount = 0;
    double average=0;
    for (int i=0;i<N;i++)average += a[i].s;
    average /= N;
    for (int i = 0; i < N; i++)if (a[i].s >= average)
    {
        b[amount++] = a[i];

    }
    *n=amount;
    return average;
}
int main()

{

    STREC s[N];

    STREC h[N];

    int i, n; double ave;

    for (i = 0; i < N; i++)

        scanf("%s%lf", s[i].num, &s[i].s);

    ave = fun(s, h, &n);

    printf("%d %7.3f\n", n, ave);

    for (i = 0; i < n; i++)

        printf("%s %4.1f\n", h[i].num, h[i].s);

    return 0;

}
