

/// wrong ans

#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s, p, res = "";
    int x;
    cin >> s >> x >> p;

    x--;

    for (int i = 0; i < p.size(); i++)
    {
        if (p[i] == 'L')
        {
            x--;
        }
        else if (p[i] == 'R')
        {
            x++;
        }
        else if (p[i] == '+')
        {
            res += s[x];
        }
    }

    cout << res << "\n";

    return 0;
}