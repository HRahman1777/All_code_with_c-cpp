#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, tar;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int f = 0, l = n - 1, x = -1;

    cin >> tar;

    while (f <= l)
    {
        int temp = (f + l) / 2;

        if (tar == a[temp])
        {
            x = temp;
            break;
        }
        else if (tar > a[temp])
        {
            f = temp + 1;
        }
        else
            l = temp - 1;
    }
    if (x != -1)
        cout << x;
    else
        cout << "not found";

    return 0;
}
