#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int tc;
    cin >> tc;

    while (tc--)
    {
        string s = "eqApafAyAAAlwuodbAstnAmxhz";
        string gs, res;
        cin >> gs;
        int j = gs.size() - 1;
        bool chk = true;
        for (int i = 0; i < gs.size(); i++)
        {
            int val = (int)gs[i] - 97;
            if (gs[j] != s[val])
            {
                chk = false;
                break;
            }
            j--;
        }
        chk ? cout << "YES\n" : cout << "NO\n";
    }

    return 0;
}
