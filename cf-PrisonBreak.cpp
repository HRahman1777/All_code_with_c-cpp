#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll fun1(ll a, ll x)
{
    ll midX = (a/2)+1;
    ll res;
    if(x>=midX)
    {
      res=x-1;
    }
    else if(x<midX)
    {
        res=a-x;
    }

    return res;
}

int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);

    ll tc, n, m, r, c;
    ll hRow, hColumn;
    cin>>tc;
    while(tc--)
    {
        cin>>n>>m>>r>>c;
        hRow = fun1(n, r);
        hColumn = fun1(m, c);
        cout<<hRow+hColumn<<"\n";
    }

    return 0;
}
