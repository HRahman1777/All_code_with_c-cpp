#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n, x;
    cin >> n >> x;

    ll m, f = 1, l = n, cnt = 0;

    while (f < l)
    {
        cnt++;
        m = (f + l) / 2;

        if (x <= m)
        {
            l = m;
        }
        else
        {
            f = m + 1;
        }
    }
    cout << cnt << "\n";

    return 0;
}
