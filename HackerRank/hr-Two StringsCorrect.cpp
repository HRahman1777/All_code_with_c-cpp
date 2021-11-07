#include <bits/stdc++.h>
using namespace std;

int main()
{

    int tc;
    cin >> tc;

    for (int k = 0; k < tc; k++)
    {
        string s1;
        cin>>s1;

        string s2;
        cin>>s2;

        string all = "abcdefghijlkmnopqrstuvwxyz";

        int count=0;

        for(int i=0; i<all.size(); i++)
        {
            if((s1.find(all[i]) != -1) && (s2.find(all[i]) != string::npos)) // npos = -1
            {
                count++;
                break;
            }
        }

        if(count!=0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}

