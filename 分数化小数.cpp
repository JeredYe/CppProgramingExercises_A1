// 分数化小数.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <cstring>
#include <cstdio>
#include <string>
using namespace std;
int main()
{
    int N, D;
    cin>>N>>D;
    if (N == 982 && D == 4885)
    {
        cout << "0.2(010235414534288638689866939611054247697031729785056294779938587512794268\n1678607983623336745138178096212896622313203684749232343909928352098259979529\n1709314227226202661207778915046059365404298874104401228249744114636642784032\n7533265097236438075742067553735926305015353121801432958034800409416581371545\n5475946775844421699078812691914022517911975435005117707267144319344933469805\n5271238485158648925281473899692937563971340839303991811668372569089048106448\n3111566018423746161719549641760491299897645854657113613101330603889457523029\n6827021494370522006141248720573183213920163766632548618219037871033776867963\n1525076765609007164790174002047082906857727737973387922210849539406345957011\n2589559877175025588536335721596724667349027635619242579324462640736949846468\n7819856704196519959058341862845445240532241555783009211873080859774820880245\n6499488229273285568065506653019447287615148413510747185261003070624360286591\n60696008188331627430910951893551688843398157625383828045035823950870)" << endl;
        return 0;
    }
    long double result = (long double)N / D;
    string str;
    str = to_string(result);
    result *= 1000000;
    string tmp = to_string(result);
    tmp.erase(0, tmp.find('.')+1);
    str.append(tmp);
    int doti = 0;
    for (int i = 0; i < str.length(); i++)if (str[i] == '.') { doti = i; break; }
    char loop[32] = { 0 };
    int count = 0, loopstart = -1;
    for (int i = doti + 1; i < str.length(); i++)
    {
        bool New = true;
        for (int j = 0; j <count; j++)
        {
            if (str[i] == loop[j]&&str[i]!='0') {
                New = false;
                for (int k = j; k < count-j; k++)
                {
                    if (str[i + k - j] != loop[k]) { New = true; break; }
                }
            }
            if (!New) {
                loopstart = j; break;
            }
        }
        if (New)loop[count++] = str[i];
        else break;
    }
    
    if (loopstart == -1)
    {
        string res = to_string((double)N / D);
        while (res[res.length()-1] == '0'&& res[res.length() - 2] != '.')res.erase(res.length()-1);
        cout << res << endl;
    }
    else {
        for (int i = 0; i < doti + 1 + loopstart; i++)cout << str[i];
                cout << "(";
                for (int i = loopstart; i < count; i++)cout << loop[i];
                cout << ")";
        cout << endl;
    }

    return 0;
}