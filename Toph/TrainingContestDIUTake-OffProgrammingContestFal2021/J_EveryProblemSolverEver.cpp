#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int getPrime(int n)
{
    vector<int> m(n);
    for (int i = 2; i * i <= n; i++)
    {
        if (m[i] == 0)
        {
            for (int j = i * i; j <= n; j++)
            {
                if (j % i == 0)
                {
                    m[j] = 1;
                }
            }
        }
    }

    int cnt = 0;
    for (int i = 0; i <= n; i++)
    {
        if (m[i] == 0)
        {
            cnt++;
        }
    }

    return cnt;
}

int main()
{
    // ios::sync_with_stdio(false);
    // cin.tie(0);
    // cout.tie(0);

    int n, tc;
    cin >> n >> tc;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int iii = 1;

    while (tc--)
    {
        char ch;
        int cnnt = 0;
        cin >> ch;
        if (ch == 'U')
        {
            int a, b;
            cin >> a >> b;
            v[a - 1] = b;
        }
        else if (ch == 'C')
        {
            int x, y, z, res;
            cin >> x >> y >> z;
            for (int ii = x - 1; ii < y; ii++)
            {
                cout << v[ii] << " ";
            }

            // for (int j = x - 1; j < y; j++)
            // {
            //     cout << v[j] << " ";
            //     /*
            //     res = getPrime(v[j]);
            //     if (res >= 2)
            //     {
            //         cnnt++;
            //     }
            //     */
            // }
            //cout << "Case " << iii++ << ": " << cnnt << "\n";
        }
    }

    return 0;
}
