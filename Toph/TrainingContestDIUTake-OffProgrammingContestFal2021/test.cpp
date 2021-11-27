#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool getPrimex(int n, int k)
{
    vector<int> m(n), primes;
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
    for (int i = 2; i <= n; i++)
    {
        if (m[i] == 0)
        {
            primes.push_back(i);
        }
    }

    for (int i = 2; i < primes.size(); i++)
    {
        if (n % i == 0)
        {
            cnt++;
            if (cnt >= k)
            {
                return true;
            }
        }
    }

    return false;
}

int main()
{
    int tc, k;
    while (1)
    {
        cin >> tc >> k;

        cout << getPrimex(tc, k);
    }

    return 0;
}
