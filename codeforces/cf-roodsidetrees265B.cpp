#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{
    ll tc;
    cin>>tc;
    ll arr[tc], i, cnt = -1, f=0;

    for(i=0; i<tc; i++)
        cin>>arr[i];

    for(i=0; i<tc; i++)
    {
        cnt++;
        cnt+=(arr[i]-f);

        cnt++;
        if(arr[i+1]<arr[i])
        {
            cnt+=(arr[i]-arr[i+1]);
            f=arr[i+1];
        }

        else
            f=arr[i];
    }
    cout<<cnt;

    return 0;
}

