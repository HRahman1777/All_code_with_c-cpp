#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll k, n, w, sum=0;
    cin>>k>>n>>w;
    for(ll i = 1; i<= w; i++)
    {
        sum = sum + (i*k);
    }
    ll sb = sum - n;
    if(sb >= 0)
        cout<<sb<<endl;
    else
        cout<<0<<endl;

    return 0;
}
