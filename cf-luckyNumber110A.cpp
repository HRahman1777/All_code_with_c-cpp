#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll num;
    cin>>num;

    int flag=0;
    for(ll i=num; i>0; i=i/10)
    {
        if((i % 10 == 4) || (i % 10 == 7))
        {
            flag++;
        }
    }

    if(flag == 4 || flag == 7)
    {
        cout<<"YES";
    }
    else
        cout<<"NO";


    return 0;
}
