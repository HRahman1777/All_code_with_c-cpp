#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        vector<string>vs(n-2);
        for(int i = 0; i < n-2; i++)
        {
            cin>>vs[i];
        }
        string s = "";
        s += vs[0];
        for(int i = 1; i < n-2; i++)
        {
            if(vs[i][0] == s.back())
            {
                s+=vs[i][1];
            }
            else
            {
                s+=vs[i];
            }
        }

        if(s.size()!= n)
            s+='a';

        cout<<s<<"\n";
    }

    return 0;
}
