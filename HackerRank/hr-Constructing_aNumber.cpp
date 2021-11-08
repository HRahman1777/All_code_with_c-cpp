#include <bits/stdc++.h>
using namespace std;

string canConstruct(vector<int> a)
{

    int res = 0;
    for (int i = 0; i < a.size(); i++)
    {
        int x = a[i];
        while (x > 0)
        {
            res += x % 10;
            x /= 10;
        }
    }

    if (res % 3 == 0)
        return "Yes\n";
    else
        return "No\n";
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
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

        string result = canConstruct(a);
        cout << result;
    }

    return 0;
}