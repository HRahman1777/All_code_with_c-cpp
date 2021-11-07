#include <bits/stdc++.h>
using namespace std;

void lonelyinteger(vector<int> a)
{
    sort(a.begin(), a.end());
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == a[i + 1] || a[i - 1] == a[i])
            continue;
        else
            cout << a[i] << "\n";
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        int a_item;
        cin >> a_item;
        a[i] = a_item;
    }

    lonelyinteger(a);

    return 0;
}