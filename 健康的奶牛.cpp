// 健康的奶牛.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int v, a[27], g, w[16][27], c[27], minm = 1000000, len, s[27];
bool vis[27];
bool pd() {
    int niu[27] = { 0 };
    for (int i = 1; i <= len; i++)
        for (int l = 1; l <= v; l++)
            niu[l] += w[s[i]][l];
    for (int i = 1; i <= v; i++)
        if (niu[i] < a[i]) return false; 
    return true;
}

void dfs() {
    if (len > g || len > minm) { 
        return;
    }
    if (pd()) {
        if (minm > len) {
            minm = len;
            for (int i = 1; i <= len; i++)
                c[i] = s[i]; 
        }
        return;
    }
    int start = s[len];   
    for (int i = start; i <= g; i++)
        if (vis[i] == false) {  
            vis[i] = true;  
            len++;          
            s[len] = i;      
            dfs();           
            vis[i] = false;   
            s[len] = 0;      
            len--;           
        }
}
int main() {
    cin >> v;
    for (int i = 1; i <= v; i++)
        cin >> a[i];
    cin >> g;
    for (int i = 1; i <= g; i++)
        for (int j = 1; j <= v; j++)
            cin >> w[i][j];
    dfs();
    cout << minm << " ";
    for (int i = 1; i <= minm; i++)
        cout << c[i] << (i==minm?"\n": " ");
}

//int V, G, demand[27] = { 0 }, Avail[16][27] = { 0 };
//int length, Selected[16] = { 0 }, minn = 100000, temp[16] = { 0 };
//bool Used[17] = { 0 };
//using namespace std;
//
//bool Judge(int length)
//{
//    int tmp[27] = { 0 };
//    for (int i = 1; i <= length; i++)
//        for (int j = 1; j <= V; j++)
//            tmp[j] += Avail[temp[i]][j];
//    for (int i = 1; i <= V; i++)
//        if (tmp[i] < demand[i])return false;
//    return true;
//}
//
//void Select()
//{
//    if (length > G || length > minn)
//        return;
//    if (Judge(length))
//    {
//        if (length < minn)
//        {
//            minn = length;
//            for (int i = 1; i <= minn; i++)
//                Selected[i] = temp[i];
//        }
//        return;
//    }
//    int start = temp[length];
//    for (int i = start; i <= G; i++)
//        if (!Used[i])
//        {
//            Used[i] = true;
//            length++;
//            temp[length] = i;
//            Select();
//            Used[i] = false;
//            temp[length] = 0;
//            length--;
//        }
//
//}
//
//int main()
//{
//
//    cin >> V;
//    for (int i = 1; i <= V; i++)
//        cin >> demand[i];
//    cin >> G;
//    for (int i = 1; i <= G; i++)
//        for (int j = 0; j < V; j++)
//            cin >> Avail[i][j];
//    Select();
//    cout << minn << " ";
//    for (int i = 1; i <= minn; i++)
//        cout << Selected[i] << " ";
//    return 0;
//}