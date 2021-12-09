#include <bits/stdc++.h>
using namespace std;

#define pi 3.1416

int main()
{

    double res, ans, hf, ires;
    long long int n;

    cin >> n;

    hf = n / 2.0;
    ires = hf * hf * 3.1416;

    res = ires / 2.0;

    ans = res + (n * n);

    printf("%.2lf\n", ans);

    return 0;
}