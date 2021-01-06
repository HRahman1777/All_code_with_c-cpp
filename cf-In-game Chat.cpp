#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int len, cnt=0;
        cin>>len;
        char arr[len];
        cin>>arr;
        for(int i=len-1; i>=0; i--)
        {
            if(arr[i] == ')') cnt++;
            else break;
        }
        if(cnt>(len-cnt)) cout<<"Yes\n";
        else cout<<"No\n";
    }

    return 0;
}
