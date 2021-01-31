#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a, b, i, tc;
    cin>>tc;
    for(int j=1; j<=tc; j++)
    {
        cin>>a>>b;
        int count=0;
        for(i=a; i<=b; i++)
        {
            cout<<i<<"\n";
            if(i%3==0)
                count++;
        }
        cout<<"Case "<<j<<": "<<count<<"\n";
    }

    return 0;
}
