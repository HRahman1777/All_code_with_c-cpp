#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{

    int tc;
    cin >> tc;
    while (tc--)
    {
        int a, b, resi;
        cin >> a >> b;
        double res = (a - b) / 2.0;
        resi = (a - b) / 2;
        if (resi == res)
        {
            cout << resi << "\n";
        }
        else
        {
            printf("%.4lf\n", res);
        }
    }

    return 0;
}
