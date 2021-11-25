#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll n, tc, x;

    scanf("%lld %lld", &n, &tc);
    ll v[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &v[i]);
    }
    ll a, b;
    while (tc--)
    {

        scanf("%lld %lld", &a, &b);
        x = 0;
        for (int i = a - 1; i < b; i++)
        {
            x += v[i];
        }
        //cout << x << ((b - a) + 1);
        double res = x / (double)((b - a) + 1);
        printf("%.2lf\n", res);
    }

    return 0;
}
