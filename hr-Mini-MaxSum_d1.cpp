#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

int main()
{
    lli sum = 0, item;
    vector<lli> v(5);
    for (int i = 0; i < 5; i++)
    {
        cin >> item;
        v[i] = item;
        sum += item;
    }

    sort(v.begin(), v.end());

    cout << sum - v[4] << " " << sum - v[0];
    return 0;
}
