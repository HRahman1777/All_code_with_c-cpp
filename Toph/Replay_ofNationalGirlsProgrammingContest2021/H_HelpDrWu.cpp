#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{

    int tc;
    bool flag;
    cin >> tc;

    while (tc--)
    {
        ll n;
        flag = false;
        cin >> n;
        vector<ll> v(n), reV(n);
        map<ll, int> m;
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        for (ll i = 0; i < n; i++)
        {
            if (i == 0)
            {
                reV[i] = v[i];
                m[v[i]]++;
            }
            else
            {
                reV[i] = v[i] - v[i - 1];
                m[reV[i]]++;
            }

            if (m[reV[i]] > 1)
            {
                flag = true;
                break;
            }
        }

        if (flag)
        {
            cout << "Lost\n";
        }
        else
        {
            cout << "Won\n";
        }
    }

    return 0;
}
