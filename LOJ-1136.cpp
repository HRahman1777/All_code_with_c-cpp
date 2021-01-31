#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a, b, i, tc, temp;
    cin>>tc;
    for(int j=1; j<=tc; j++)
    {
        cin>>a>>b;
        int count=0;
        for(i=a; i<=b; i++)
        {
            temp=(i*(i+1))/2;
            if(temp%3==0)
                count++;
        }
        cout<<"Case "<<j<<": "<<count<<"\n";
    }

    return 0;
}
