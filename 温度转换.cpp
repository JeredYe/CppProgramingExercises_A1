// 温度转换.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int ctof(int c)
{
    return 32 + c * 9 / 5;
}
int main() {

    int i, start, end;
    cin >> start >> end;
    for (int i = start; i <= end; i += 10) {
        cout << i << "C=";
        cout << ctof(i) <<"F" << endl;
    }
    return 0;
}