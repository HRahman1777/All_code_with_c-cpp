#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    map<string, int> m;

    while (cin >> s)
    {
        m[s] = 1;
    }

    cout << m.size() << "\n";

    return 0;
}