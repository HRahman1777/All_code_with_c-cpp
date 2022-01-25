#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n, i;
        cin>>n;
        char a[n], b[n];
        cin>>a>>b;

        if((a[0] == '1' && b[0] == '1') || (a[n-1] == '1' && b[n-1] == '1'))
        {
            cout<<"NO\n";
        }
        else
        {
            for(i=0; i<n-1; i++)
            {
                if((a[i] == '0' && a[i+1] == '0') || (b[i] == '0' && b[i+1] == '0') || (a[i] == '0' && b[i] == '0') || (a[i] == '0' && b[i+1] == '0') || (b[i] == '0' && a[i+1] == '0') )
                    continue;
                else
                {
                    cout<<"NO\n";
                    break;
                }
            }

            if(i == n-1)
                cout<<"YES\n";
        }
    }

    return 0;
}
