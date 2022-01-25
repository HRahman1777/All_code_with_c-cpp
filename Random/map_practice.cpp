#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, char> m1;
    map<char, int> m2;

    m1[1] = 'o';
    m1[4] = 't';

    m2['a'] = 5;
    m2['b'] = 10;

    cout << m1.size() << " " << m1[4] << " " << m2['b'] << endl;

    for (auto i : m1)
    {
        cout << i.first << " " << i.second << endl;
    }

    string s;

    while (cin >> s)
    {
        cout << s << endl;
    }

    return 0;
}