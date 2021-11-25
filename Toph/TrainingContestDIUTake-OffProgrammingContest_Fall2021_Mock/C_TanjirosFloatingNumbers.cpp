#include <bits/stdc++.h>
using namespace std;

int main()
{

    double x, r, p;
    cin >> x;
    int y = x;

    r = x - y;

    if (r == 0.0)
        cout << y << "\n";
    else
        printf("%.2lf\n", x);

    return 0;
}
