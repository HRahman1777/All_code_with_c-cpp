#include <bits/stdc++.h>
using namespace std;

int main()
{

    int tc;
    cin >> tc;
    long long int x, y, a, b, c;
    while (tc--)
    {
        cin >> x >> y >> a >> b;

        double res = x / (double)a, res2 = y / (double)b;

        c = res * res2;

        cout << c << "\n";
    }

    return 0;
}
/// wrong ans