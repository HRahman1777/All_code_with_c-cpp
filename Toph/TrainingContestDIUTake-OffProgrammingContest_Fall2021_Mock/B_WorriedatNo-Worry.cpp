#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll val, tk, rem, res, res2;
    cin >> val >> tk;

    rem = val % tk;

    if (rem == 0)
    {
        cout << val / tk << "\n";
    }
    else
    {
        res = val / tk;
        res2 = res * tk;
        cout << (val - res2) + res << "\n";
    }

    return 0;
}
