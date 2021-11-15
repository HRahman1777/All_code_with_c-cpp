#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

//print all prime number between 2 to n
void sieveOne(lli n)
{
    vector<lli> m(n);
    for (lli i = 2; i <= n; i++)
    {
        if (m[i] == 0)
        {
            for (lli j = i + i; j <= n; j++)
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
            cout << i << " ";
        }
    }
}

//print all prime number between 2 to n (optimal nlog(nlogn))
void sieveAdv(lli n)
{
    vector<lli> m(n);
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
            cout << i << " ";
        }
    }
}

// normal prime with rot(n) time compelxity
void normalPrime(lli n)
{
    int x = 0;
    for (lli i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            x = 1;
            break;
        }
    }
    x == 1 ? cout << n << " Not prime." << endl : cout << n << " Prime" << endl;
}

//Prime between two number with seive
void primeBetween_Seive(lli n)
{
    lli x;
    cin >> x;
    vector<lli> m(x);
    for (lli i = 2; i * i <= x; i++)
    {
        if (m[i] == 0)
        {
            for (lli j = i * i; j <= x; j++)
            {
                if (j % i == 0)
                {
                    m[j] = 1;
                }
            }
        }
    }

    for (lli i = n; i <= x; i++)
    {
        if (m[i] == 0)
        {
            cout << i << " ";
        }
    }
}

int main()
{
    lli n;
    cin >> n;
    //sieveOne(n);
    //normalPrime(n);
    //sieveAdv(n);
    primeBetween_Seive(n);
    return 0;
}