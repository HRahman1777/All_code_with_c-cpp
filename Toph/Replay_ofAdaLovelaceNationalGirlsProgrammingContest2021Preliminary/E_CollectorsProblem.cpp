#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{

    ll n, m;
    cin >> n >> m;
    vector<ll> people(n), pack(m), pay(m);
    for (ll i = 0; i < m; i++)
    {
        cin >> pack[i];
    }
    for (ll i = 0; i < m; i++)
    {
        cin >> pay[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> people[i];
    }

    vector<ll> sum(n);

    for (ll i = 0; i < m; i++)
    {
        ll s = 0;
        for (ll j = 0; j < n; j++)
        {
            s += (people[j] - pack[i]);
        }
        sum[i] = s - pay[i];
    }
    ll max;
    if (m == 1)
    {
        max = sum[0];
    }
    else
    {
        max = *max_element(sum.begin(), sum.end());
    }
    if (max > 0)
    {
        cout << "Profit " << max << "\n";
    }
    else if (max < 0)
    {
        cout << "Loss " << max * (-1) << "\n";
    }
    else
    {
        cout << "Neutral\n";
    }

    return 0;
}