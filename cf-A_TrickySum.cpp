#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{

    int tc;
    cin >> tc;

    while (tc--)
    {
        ll n, genS = 0, num = 1, pS = 0;
        cin >> n;
        genS = n * (n + 1) / 2;
        while (num <= n)
        {
            pS += num;
            num *= 2;
        }
        cout << genS - (pS * 2) << "\n";
    }

    return 0;
}
