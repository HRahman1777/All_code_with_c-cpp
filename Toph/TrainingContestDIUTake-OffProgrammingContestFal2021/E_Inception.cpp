#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, cnt = 0;
    cin >> n;
    int a[n];
    map<int, int> m;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

        m[a[i]]++;
    }

    for (auto i : m)
    {
        if (i.second % 2 != 0)
        {
            cnt++;
        }
    }

    cout << cnt << "\n";

    return 0;
}
