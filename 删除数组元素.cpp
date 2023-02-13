
#include <iostream>
using namespace std;
#include <cstdio>
int main()
{
    int Array[128] = { 0 };
    int n,DeleteN;
    cin >> n;
    START:
    for (int i = 0; i < n; i++)cin >> Array[i];
    cin >> DeleteN;
    for (int i = 0; i < n; i++)Array[i] = ((Array[i] == DeleteN) ? -1 : Array[i]);
    bool FIRST = false;
    for (int i = 0; i < n; i++)
    {
        if (Array[i] != -1)
        {
            if (i != 0 && FIRST)cout << " ";
            cout << Array[i];
            FIRST = true;
        }
    }
    if (!FIRST)
    {
        cout << "Empty array!";
    }
    cout << endl;
    if (cin>>n)
    {
        goto START;
    }
    return 0;
}
//9.27 21:12AC