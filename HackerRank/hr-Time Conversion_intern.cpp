#include <bits/stdc++.h>
using namespace std;



void timeConversion(string s)
{
    if(s[8] == 'P')
    {
        if(s[0] == '0')
        {
            cout<<12+((int)s[1]-48)<<":";
        }
        if(s[0] == '1')
        {
            if(s[1] == '1')
                cout<<23<<":";
            else
                cout<<"12:";
        }

        for(int i=3; i<s.size() - 2; i++)
            cout<<s[i];
    }
    else
    {
        if(s[1] == '2')
        {
            s[0] = '0';
            s[1] = '0';
        }
        for(int i=0; i<s.size() - 2; i++)
            cout<<s[i];
    }

    cout<<"\n";
}

int main()
{
    string s;
    getline(cin, s);

    timeConversion(s);

    return 0;
}
