// 整除的尾数-.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>
int getResult(int a, int b, int weishu[])
{
    int count = 0;
    a *= 100;
    for (int i = 0; i < 100; i++)if ((a + i) % b == 0)weishu[count++] = i;
    return count;
}
int main()
{
    int a, b, weishu[100], count, i;
    scanf("%d%d", &a, &b);
    count = getResult(a, b, weishu);
    for (i = 0; i < count; i++)
    {
        if (i > 0)
            printf(" ");
        printf("%02d", weishu[i]);
    }
    printf("\n");
    return 0;
}