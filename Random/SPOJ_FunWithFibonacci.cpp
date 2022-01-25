#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{

    int tc;
    cin >> tc;

    ll e, o, a, n, total;
    for (int i = 1; i <= tc; i++)
    {
        cin >> a >> n;
        e = 0, o = 0;

        a--, n--;

        total = (n - a) + 1 + (a ? 0 : 1);

        e = ((n / 3LL) - (a / 3LL)) + (a % 3 ? 0 : 1);

        o = total - e - (a ? 0 : 1);

        printf("Case %d:\n", i);
        cout << "Odd = " << o << "\n"
             << "Even = " << e << "\n";
    }

    return 0;
}
