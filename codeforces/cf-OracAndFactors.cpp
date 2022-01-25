#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    long long int tc, n, k;
    cin>>tc;
    while(tc--)
    {
        cin>>n>>k;
        long long tm, mi;
        if(n%2 == 0)
        {
            n = n + (k*2);
            cout<<n<<endl;
        }
        else
        {
            for(int i=n; i>=2; i--)
            {
                if(n%i == 0)
                {
                    tm = i;
                }
            }
            mi = tm+n+2*(k-1);
            cout<<mi<<endl;
        }
    }

    return 0;
}
