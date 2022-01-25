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
            lli ans, x, y;
            cin >> a >> d >> n;
            /*
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
            */
            x = 2 * a + (n - 1) * d;
            ans = (n * x) / 2;

            cout << ans << "\n";
        }
    }
    return 0;
}