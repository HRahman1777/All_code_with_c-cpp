#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll n, m, MAX, MIN;
        cin >> n >> m;
        vector<ll> b(n), s(m);
        for (ll i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        for (ll i = 0; i < m; i++)
        {
            cin >> s[i];
        }
        sort(b.begin(), b.end());
        sort(s.begin(), s.end());
        int i = m - 1, j = 0;
        ll sum = 0;
        while (1)
        {
            MAX = s[i];
            MIN = b[j];
            // cout << MAX << " " << MIN << endl;
            if ((MAX > MIN) && i >= 0 && j < n)
            {
                sum += (MAX - MIN);
                i--;
                j++;
            }
            else
            {
                break;
            }
        }

        cout << sum << "\n";
    }
    return 0;
}