#include<iostream>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        long long int a, b;
        int count=0;
        cin>>a>>b;
        for(int n = a; n<=b; n++)
        {
            long long int sum = 1;
            for(long long int i=2; i*i<=n; i++)
            {
                if (n%i==0)
                {
                    if(i*i!=n)
                        sum = sum+i+n/i;
                    else
                        sum=sum+i;
                }
            }
            if (sum == n && n != 1)
                count++;
        }

        cout<<count<<"\n";
    }
    return 0;
}
