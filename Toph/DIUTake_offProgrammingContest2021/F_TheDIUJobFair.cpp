
/// not complete

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int tc, res, fl, ll;
    long long int l, r, d;

    cin >> tc;
    while (tc--)
    {
        cin >> l >> r >> d;
        res = ((r - l) / 10) - 1;
        fl = l % 10;
        ll = r % 10;

        if (d == 0)
        {
            if (fl == d)
                res++;
            if (ll >= d)
                res++;
        }
        else
        {
            if (fl <= d)
                res++;
            if (ll >= d && ll != 0)
                res++;
        }

        cout << res << "\n";
    }

    return 0;
}
