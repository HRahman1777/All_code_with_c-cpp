#include <bits/stdc++.h>
using namespace std;

int main()
{

    int tc;
    cin >> tc;
    while(tc--)
    {
        int n, k;
        cin >> n ;
        int arr[n];
        k=n/2;
        for (int i = 1; i <= n; ++i)
        {
            cin>>arr[i];
        }
        for(int i=1; i<=k; i++)
        {
            if(i==1)
                cout<<arr[i]<<" "<<arr[n]<<" ";
            else
                cout<<arr[i]<<" "<<arr[n-(i-1)]<<" ";
        }
        if(n%2!=0)
            cout<<arr[k+1];
        cout<<endl;
    }

    return 0;
}

