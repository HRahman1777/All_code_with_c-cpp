#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll n, m;
    cin>>n>>m;

    if(n%2 == 0)
    {
        ll half=n/2;
        if(m<=half)
            cout<<(2*m)-1;
        else
            cout<<(2*(m-half));
    }

    else
    {
        ll half=(n/2)+1;

        if(m<=half)
            cout<<(2*m)-1;
        else
            cout<<(2*(m-half));
    }

    return 0;
}
