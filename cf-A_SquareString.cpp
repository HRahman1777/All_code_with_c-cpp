#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        string s;
        cin>>s;
        if(s.size()%2 != 0)
        {
            cout<<"NO\n";
        }
        else
        {
            int fl = 0;
            int j = (s.size()/2);
            for(int i = 0; i<s.size()/2; i++)
            {
                if(s[i] == s[j])
                {
                    fl = 1;
                }
                else
                {
                    fl = 0;
                    break;
                }

                j++;
            }
            if(fl)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
    }
    return 0;
}
