#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll factorial(ll n)
{
    if (n <= 1)
    {
        return n;
    }
    return n * factorial(n - 1);
}

void minusMod()
{
    ll x = -17, m = 5;
    cout << x % m << "\n";
    ll p = (abs(x) / m) + 1; //if (x%m)<0
    x += p * m;
    cout << x % m << "\n";
}

void factorialMod()
{
    ll n, m;
    cin >> n >> m;
    ll x = 1;
    for (ll i = 2; i <= n; i++)
    {
        //x = x * i;
        x = ((x % m) * (i % m)) % m;
    }
    //cout << x % m << "\n";
    cout << x << "\n";

    cout << factorial(n) % m << endl;
}

void floatingRoundingError()
{
    double x = 0.3 * 3 + 0.1;

    printf("%.20lf\n", x);
    if (x == 1)
    {
        cout << "1 done\n";
    }
    if (abs(x - 1) < 1e-9)
    {
        cout << "2 done\n";
    }
}

int main()
{
    //minusMod();
    //factorialMod();
    floatingRoundingError();

    return 0;
}