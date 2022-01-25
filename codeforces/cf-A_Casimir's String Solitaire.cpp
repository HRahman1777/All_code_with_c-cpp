#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc, ac, bc, cc;
    string s;
    cin>>tc;
    while(tc--)
    {
        cin>>s;
        ac=0;
        bc=0;
        cc=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] == 'A')
                ac++;
            else if(s[i] == 'B')
                bc++;
            else
                cc++;
        }
        if(ac+cc == bc)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}
