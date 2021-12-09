#include <bits/stdc++.h>
using namespace std;

#define pi 3.1416

int main()
{
    int n;
    cin >> n;

    if (n >= 0 && n <= 15)
    {
        cout << "Troposphere\n";
    }
    else if (n >= 16 && n <= 50)
    {
        cout << "Stratosphere\n";
    }
    else if (n >= 51 && n <= 85)
    {
        cout << "Mesosphere\n";
    }
    else if (n >= 86 && n <= 500)
    {
        cout << "Thermosphere\n";
    }

    else if (n >= 501 && n <= 1000)
    {
        cout << "Exosphere\n";
    }

    return 0;
}