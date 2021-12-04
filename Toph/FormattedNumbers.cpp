#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;
    string s = to_string(num), s2 = "";
    reverse(s.begin(), s.end());
    for (int i = 0, j = 0; i < s.size(); i++)
    {
        if (j >= 3)
        {
            s2 += ',';
            s2 += s[i];
            j = 1;
        }
        else
        {
            s2 += s[i];
            j++;
        }
    }

    reverse(s2.begin(), s2.end());
    cout << s2 << "\n";

    return 0;
}