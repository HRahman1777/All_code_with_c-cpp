#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        string s;
        string x;
        cin>>s;
        cin>>x;
        int res=0;
        map<char, int> yo;
        for(int i=0; i<26; i++)
        {
            yo[s[i]] = i+1;
        }

        for(int i=1; i<x.size(); i++)
        {
            res += abs(yo[x[i]] - yo[x[i-1]]);
        }

        cout<<res<<"\n";
    }

    return 0;
}
