#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

int main()
{
    lli tc;
    cin >> tc;
    while (tc--)
    {
        lli ntc;
        cin >> ntc;
        while (ntc--)
        {
            lli a, d, n, res = 0;
            cin >> a >> d >> n;
            if (n == 0)
            {
                cout << a << "\n";
                return 0;
            }
            else
            {
                for (lli i = 0, j = a; i < n; i++, j += d)
                {
                    res += j;
                }
            }

            cout << res << "\n";
        }
    }
    return 0;
}