#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s, s2="", s3="";
    getline(cin, s);
    // i go to school
    //loohcs ot og i

    for(int i = 0; i<=s.size(); i++)
    {
        if(s[i] == ' ' || i == s.size())
        {
            reverse(s2.begin(), s2.end());
            s2 += " ";
            s3 += s2;
            s2 = "";
        }
        else
        {
            s2 += s[i];
        }
    }
    cout<<s3;

    return 0;
}

