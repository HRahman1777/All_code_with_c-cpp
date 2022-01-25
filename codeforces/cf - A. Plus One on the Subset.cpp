#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{

    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        vector<ll>v(n);
        ll m = -1, m2 = -1;
        for(int i = 0; i < n; i++)
        {
            cin>>v[i];
            if(v[i] >= m)
            {
                m = v[i];
            }
        }

        if(n == 1)
        {
            cout<<"0\n";
        }
        else
        {
            for(int i = 0; i < n; i++)
            {
                v[i] = m - v[i];
                if(v[i] >= m2)
                {
                    m2 = v[i];
                }
            }
            cout<<m2<<"\n";
        }

    }


    return 0;
}
