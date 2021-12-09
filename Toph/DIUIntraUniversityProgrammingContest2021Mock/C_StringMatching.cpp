#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    string a, b;
    getline(cin, a);
    getline(cin, b);
    int cnt = 0, x, y;
    for (int i = 0; i < a.size(); i++)
    {
        x = a[i];
        y = b[i];

        if (x == y || x + 32 == y || x == y + 32)
        {
            cnt++;
        }
    }
    if (cnt == a.size())
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}