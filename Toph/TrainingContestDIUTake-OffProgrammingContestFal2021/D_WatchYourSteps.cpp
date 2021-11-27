#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n, x, y, z, c, pY, pZ;
    cin >> n >> x >> y >> z >> c;

    pY = c * c;
    pZ = c * c * c;
    if (x == c || x == pY || x == pZ)
    {
        cout << "Eliminated on 1st hop\n";
    }
    else if ((x + y) == c || (x + y) == pY || (x + y) == pZ)
    {
        cout << "Eliminated on 2nd hop\n";
    }
    else if (((x + y + z) == c) || ((x + y + z) == pY) || ((x + y + z) == pZ))
    {
        cout << "Eliminated on 3rd hop\n";
    }
    else if ((x + y + z) > n)
    {
        cout << "Safe\n";
    }
    else
    {
        cout << "Eliminated on 3rd hop\n";
    }

    return 0;
}
