#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

//Divisor Count big o n
void normalDivisorCount(lli n)
{
    int cnt = 0;
    for (lli i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
}

// more optimized - big o rot(n)
void normalDivisorCount_Two(lli n)
{
    int cnt = 0;
    for (lli i = 1; i * i <= n; i++)
    {
        if (i * i == n)
        {
            cnt++;
        }
        else if (n % i == 0)
        {
            cnt += 2;
        }
    }
    cout << cnt << endl;
}

// more optimized
void divisorCount_opti(lli n)
{
    vector<lli> m(n), primes;
    for (lli i = 2; i * i <= n; i++)
    {
        if (m[i] == 0)
        {
            for (lli j = i * i; j <= n; j++)
            {
                if (j % i == 0)
                {
                    m[j] = 1;
                }
            }
        }
    }
    for (lli i = 2; i <= n; i++)
    {
        if (m[i] == 0)
        {
            primes.push_back(i);
        }
    }

    int count = 1;
    for (lli i = 1; i < primes.size(); i++)
    {
        if (n % i == 0)
        {
            int count2 = 1;
            while (n % i == 0)
            {
                count2++;
                n /= i;
            }
            count *= count2;
        }
    }

    cout << count;
}

int main()
{
    lli n;
    cin >> n;

    //normalDivisorCount(n);
    //normalDivisorCount_Two(n);
    divisorCount_opti(n);

    return 0;
}