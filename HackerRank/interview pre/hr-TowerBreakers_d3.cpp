#include <bits/stdc++.h>
using namespace std;

int towerBreakers(int n, int m)
{
    if (n % 2 == 0 || m == 1)
        return 2;
    else
        return 1;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc, n, m, res;
    cin >> tc;
    while (tc--)
    {
        cin >> n >> m;
        res = towerBreakers(n, m);
        cout << res << "\n";
    }

    return 0;
}