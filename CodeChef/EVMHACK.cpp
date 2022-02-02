#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int a,b,c,x,y,z;
        cin>>a>>b>>c>>x>>y>>z;
        int temp = (x+y+z)/2;
        if(a+b+c > temp)
            cout<<"YES\n";
        else
        {
            if(x+b+c > temp)
                cout<<"YES\n";
            else if(a+y+c > temp)
                cout<<"YES\n";
            else if(a+b+z > temp)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
    }

    return 0;
}
