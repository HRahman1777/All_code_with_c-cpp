#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc, boo=0;
    cin>>tc;
    while(tc--)
    {
        int r = 0, g = 0, b = 0;
        string s;
        cin>>s;
        for(int i = 0; i < s.size(); i++)
        {
            boo=0;

            if(s[i] == 'r')
                r++;

            if(s[i] == 'g')
                g++;

            if(s[i] == 'b')
                b++;

            if(s[i] == 'R')
            {
                if(r > 0)
                    r--;
                else
                {
                    boo=1;
                    cout<<"NO\n";
                    break;
                }
            }

            if(s[i] == 'G')
            {
                if(g > 0)
                    g--;
                else
                {
                    boo=1;
                    cout<<"NO\n";
                    break;
                }
            }

            if(s[i] == 'B')
            {
                if(b > 0)
                    b--;
                else
                {
                    boo=1;
                    cout<<"NO\n";
                    break;
                }
            }
        }

        if(boo == 0)
            cout<<"YES\n";

    }


    return 0;
}
