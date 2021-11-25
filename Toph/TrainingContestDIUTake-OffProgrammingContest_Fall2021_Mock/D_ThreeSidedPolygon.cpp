#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    int x;
    cin >> x;
    if (x % 3 == 0)
    {
        cout << "Equilateral\n";
    }
    else if (x == 4)
    {
        cout << "Invalid\n";
    }
    else
    {
        cout << "Isosceles\n";
    }

    return 0;
}
