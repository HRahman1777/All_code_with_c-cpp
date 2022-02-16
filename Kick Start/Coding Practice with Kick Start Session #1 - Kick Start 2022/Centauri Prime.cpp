/// Coding Practice with Kick Start Session #1 - Kick Start 2022

#include <bits/stdc++.h>
using namespace std;

string GetRuler(const string &kingdom)
{
    string ruler = "nobody";
    char ch = kingdom[kingdom.size() - 1];
    if (ch == 'Y' || ch == 'y')
        return ruler;

    bool chk = false;
    char str[10] = {'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};
    for (int i = 0; i < 10; i++)
    {
        if (ch == str[i])
            chk = true;
    }
    if (chk)
        ruler = "Alice";
    else
        ruler = "Bob";

    return ruler;
}

int main()
{
    int testcases;
    cin >> testcases;
    string kingdom;

    for (int t = 1; t <= testcases; ++t)
    {
        cin >> kingdom;
        cout << "Case #" << t << ": " << kingdom << " is ruled by "
             << GetRuler(kingdom) << ".\n";
    }
    return 0;
}
