#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc, num;
    cin>>tc;
    while(tc--)
    {
        cin>>num;
        char arr[num];
        cin>>arr;
        int j=0;
        if(arr[j]=='2' && arr[j+1]=='0' && arr[j+2]=='2' && arr[j+3]=='0')
            cout<<"YES\n";
        else if(arr[num-4]=='2' && arr[num-3]=='0' && arr[num-2]=='2' && arr[num-1]=='0')
            cout<<"YES\n";
        else if(arr[j]=='2' && arr[num-3]=='0' && arr[num-2]=='2' && arr[num-1]=='0')
            cout<<"YES\n";
        else if(arr[j]=='2' && arr[j+1]=='0' && arr[num-2]=='2' && arr[num-1]=='0')
            cout<<"YES\n";
        else if(arr[j]=='2' && arr[j+1]=='0' && arr[j+2]=='2' && arr[num-1]=='0')
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
