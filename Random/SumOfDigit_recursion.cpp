#include <bits/stdc++.h>
using namespace std;

int sum(int x)
{
    if (x > 9)
    {
        return x % 10 + sum(x / 10);
    }
    else
        return x % 10;
}

int main()
{
    int x;
    cin >> x;
    cout << sum(x);

    return 0;
}