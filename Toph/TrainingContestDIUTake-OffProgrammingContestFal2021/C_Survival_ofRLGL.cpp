#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll d, x, a, t, p;
    cin >> d >> x >> a >> t;
    double dif, res;
    dif = d - x;
    p = a * t * t;
    res = p / 2.0;

    if (res > dif)
    {
        cout << "Allah bachaise!!!\n";
    }
    else
    {
        cout << "Moira gesi!!!\n";
    }

    return 0;
}
