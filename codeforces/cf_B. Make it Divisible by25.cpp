#include<bits/stdc++.h>
using namespace std;

int main()
{
    string t[] = {"00", "25", "50", "75"};
    string s;
    int tc, flag;
    cin>>tc;
    while(tc--)
    {
        cin >> s;
        int ans = s.size();
        for(int i=0; i<4; i++)
        {
            flag = 1;
            for(int j=s.size()-1; j>=0; j--)
            {
                if (s[j] == t[i][flag])
                {
                    flag--;
                    //cout<<j<<" "<<s[j]<<endl;
                }
                if (flag == -1)
                {
                    //cout<<"x: "<<j<<" "<<s[j]<<endl;
                    int x=s.size()-j-2;
                    ans = min(ans, x);
                    break;
                }
            }
        }

        cout << ans << "\n";
    }

    return 0;

}
