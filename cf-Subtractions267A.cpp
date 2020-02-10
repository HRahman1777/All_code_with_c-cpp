#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        ll a=0, b=0, sm=0;
        cin>>a>>b;
        while(a > 0 && b > 0)
        {
            if(a >= b)
            {
                sm += a/b;
                a -= (a/b) * b;
            }
            else
            {
                sm += b/a;
                b -= (b/a) * a;
            }
        }
        cout<<sm<<endl;
    }
    return 0;
}
