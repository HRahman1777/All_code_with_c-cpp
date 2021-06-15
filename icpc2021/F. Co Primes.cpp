#include<bits/stdc++.h>
using namespace std;

long long int gcd(long long int n1, long long int n2)
{
    while(n1!=n2)
    {
        if(n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }
    return n1;
}
int main()
{
    int tc, cnt;
    cin>>tc;
    for(int i=1; i<=tc; i++)
    {
        cnt=0;
        long long int a, b, m;
        cin>>a>>b>>m;
        for(long long int j=0; j<=m; j++)
        {
            if(gcd(a+j, b+j) == 1)
                cnt++;
        }
        cout<<"Case "<<i<<": "<<cnt<<"\n";
    }

    return 0;
}

