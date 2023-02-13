#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    int t, H, M, S, D;
    cin >> t;
    D = t / (24 * 3600);
    t%= 24 * 3600;

    H = t / 3600;
    t %= 3600;

    M = t / 60;
    t %= 60;

    S = t;

    if (D>=2)
    {

        cout << D << " " << "days" << " " << (H<10?"0":"") << H << ":" << (M < 10 ? "0" : "") << M << ":" << (S < 10 ? "0" : "") << S;
    }
    else if (D>=1)
    {
        cout << D << " " << "day" << " " << (H < 10 ? "0" : "") << H << ":" << (M < 10 ? "0" : "") << M << ":" << (S < 10 ? "0" : "") << S;
    }
    else if (H>=1)
    {

        cout << (H < 10 ? "0" : "") << H << ":" << (M < 10 ? "0" : "") << M << ":" << (S < 10 ? "0" : "") << S;
    }
    else if (M>=1)
    {

        cout << (M < 10 ? "0" : "") << M << ":" << (S < 10 ? "0" : "") << S;
    }
    else if (S>=10)
    {
        cout << (S < 10 ? "0" : "") << S;
    }
    else
    {
        cout << S;
    }



    return 0;
}
