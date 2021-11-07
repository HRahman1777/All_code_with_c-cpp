#include <bits/stdc++.h>
using namespace std;

int main()
{

    int tc;
    cin >> tc;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int k = 0; k < tc; k++)
    {
        string s1;
        getline(cin, s1);

        string s2;
        getline(cin, s2);



        int count=0;
        for(int i=0; i<(s1.size()/sizeof(s1[0])); i++)
        {
            for(int j=0; j<(s2.size()/sizeof(s2[0])); j++)
                //for(string::size_type j=0; j<s2.size(); j++)
            {
                if(s1[i] == s2[j])
                {
                    count++;
                    break;
                }
            }
        }
        if(count!=0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}

