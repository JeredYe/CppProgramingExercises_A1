// 测试.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
    //char ch;
    //while (std::cin>>ch)
    //{
    //    ch = (ch >= '0' && ch <= '9' ? '9' - ch : ch);
    //    if (ch >= 0 && ch <= 9)
    //        std::cout << (int)ch<< std::endl;
    //    else
    //        std::cout << ch << std::endl;
    //}

        int a = 4, b = 5, c = 0, d;
        d = !a && !b || !c;
        std::cout << d;
    return 0;
}
