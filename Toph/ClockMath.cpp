#include <bits/stdc++.h>
using namespace std;

int main()
{
    float a, b, c;
    cin >> a >> b;
    c = (0.5 * b + 30 * a) - b * 6;
    if (c > 180)
    {
        printf("%.7f\n", 360 - c);
    }
    else
    {
        printf("%.7f\n", c);
    }

    return 0;
}