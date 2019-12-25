#include<iostream>
using namespace std;
int main()
{
    //int tc;
    //cin>>tc;
    while(1)
    {
        long long int n;
        int count=0;
        cin>>n;
        long long int sum = 1;
        for(long long int i=2; i*i<=n; i++)
        {
            if(n%i==0)
            {
                if(i*i!=n)
                {
                    sum = sum+i+n/i;
                    cout<<sum<<" != \n";
                }
                else
                {
                    sum=sum+i;
                    cout<<sum<<"\n";
                }
            }
        }
        if(sum == n && n != 1)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    return 0;
}
