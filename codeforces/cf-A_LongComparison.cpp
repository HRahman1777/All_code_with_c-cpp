#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{

    int tc;
    cin >> tc;
    while (tc--)
    {
        ll a, p1, p2, b, ax, bx;
        cin >> a >> p1;
        cin >> b >> p2;
        if (p1 == p2)
        {
            if (a > b)
            {
                cout << ">\n";
            }
            else if (a == b)
            {
                cout << "=\n";
            }
            else
            {
                cout << "<\n";
            }
        }
        else
        {

            ll mi = min(p1, p2);
            p1 = p1 - mi;
            p2 = p2 - mi;

            if (to_string(a).size() + p1 > to_string(b).size() + p2)
            {
                cout << ">\n";
            }
            else if (to_string(a).size() + p1 < to_string(b).size() + p2)
            {
                cout << "<\n";
            }
            else
            {
                string x, x2;
                x = to_string(a) + string(p1, '0');
                x2 = to_string(b) + string(p2, '0');
                if (x > x2)
                {
                    cout << ">\n";
                }
                else if (x == x2)
                {
                    cout << "=\n";
                }
                else
                {
                    cout << "<\n";
                }
            }
        }
    }

    return 0;
}