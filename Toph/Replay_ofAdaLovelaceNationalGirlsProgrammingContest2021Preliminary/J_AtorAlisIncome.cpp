#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int q;
        cin >> q;
        while (q--)
        {
            ll a, d, n;
            cin >> a >> d >> n;

            ll res = d * n;
            cout << res + (a - d) << "\n";
        }
    }
    return 0;
}