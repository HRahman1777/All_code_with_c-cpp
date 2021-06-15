#include<bits/stdc++.h>
using namespace std;

bool prime(long long int n)
{
    for (long long int i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            return true;
        }
        return false;
    }
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
            a = a+j;
            b = b+j;
            if(prime(a)|| prime(b))
            {
                if(a==1)
                    cnt++;
                else if(b%a!=0)
                    cnt++;

            }
            else if(b%a!=0)
                cnt++;
        }
        cout<<"Case "<<i<<": "<<cnt<<"\n";
    }

    return 0;
}

