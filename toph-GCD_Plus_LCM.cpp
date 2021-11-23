#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll gcd(ll a, ll b)
{
    ll r;
    while (1)
    {
        r = a % b;
        if (r == 0)
        {
            return b;
        }
        a = b;
        b = r;
    }
}

int main()
{
    ll tc, a, b, g_res, l_res;
    cin >> tc;
    while (tc--)
    {
        cin >> a >> b;
        g_res = gcd(a, b);
        l_res = (a / g_res) * b;
        if (g_res + l_res == a + b)
        {
            cout << "true\n";
        }
        else
        {
            cout << "false\n";
        }
    }
}