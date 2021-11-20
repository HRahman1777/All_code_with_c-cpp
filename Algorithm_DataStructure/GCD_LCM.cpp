#include <bits/stdc++.h>
using namespace std;

void GCD_normal()
{
    int x, y;
    cin >> x >> y;
    int mx = max(x, y);
    int mi = min(x, y);
    for (int i = mi; i > 0; i--)
    {
        if (mx % i == 0 && mi % i == 0)
        {
            cout << i << "\n";
            break;
        }
    }
}

void GCD_opti()
{
    int x, y;
    cin >> x >> y; // x is >= y

    while (1)
    {
        int rem = x % y;
        if (rem == 0)
        {
            cout << y << endl;
            break;
        }
        x = y;
        y = rem;
    }
}

void LCM_normal()
{
    int x, y;
    cin >> x >> y;
    int i = max(x, y);
    while (1)
    {
        if (i % x == 0 && i % y == 0)
        {
            cout << i << endl;
            break;
        }
        i++;
    }
}

void LCM_opti()
{
    //GCD
    int x, y;
    cin >> x >> y; // x is >= y
    int xx = x, yy = y;
    while (1)
    {
        int rem = x % y;
        if (rem == 0)
        {
            cout << (xx / y) * yy << endl; // (x*y)/GCD(x,y)
            break;
        }
        x = y;
        y = rem;
    }
}

int main()
{
    int c;
    cout << "1 GCD, 2 LCM\n";
    cin >> c;
    switch (c)
    {
    case 1:
        GCD_normal();
        GCD_opti();
        break;

    case 2:
        LCM_normal();
        LCM_opti();
        break;

    default:
        break;
    }
    return 0;
}