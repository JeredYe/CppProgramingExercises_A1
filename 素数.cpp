// int count=0;
// for (int i=n;i<=m;i++)
// {
//     bool IsPrime=true;
//     for (int j=2;j<=i-1;j++)
//           {
//                 if(i>=4&&i%j==0)
//                     {IsPrime=false;break;}
//           }
//     if(IsPrime)count++;
// }

#include <iostream>
using namespace std;
int main()
{
    int n,m,a=0,s,i,j;
    while(cin>>n>>m)
    {
        for(i=n; i<=m; ++i)
        {
            bool s;
            for(j=2;j<=i-1;j++)
            {
                if(i>=4&&i%j==0)
                {
                    s=false;
                    break;
                }
                else if(i==1)
                    s=false;
                 else if(i==2)
                    s=true;
                     else if(i==3)
                    s=true;
                else
                    s=true;
            }
         cout<<i<<endl;
        }
    }
    return 0;
}
