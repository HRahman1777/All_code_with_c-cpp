#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

int superDigit(string n, int k)
{
    lli siz = n.size();
    if (siz == 1 && k == 1)
    {
        return n[0] - 48;
    }
    else
    {
        lli s = 0;
        for (lli i = 0; i < siz; i++)
        {
            s += (n[i] - 48) * k;
        }

        return superDigit(to_string(s), 1);
    }
}

int main()
{
    string n;
    int k;
    cin >> n >> k;

    int result = superDigit(n, k);

    cout << result << "\n";

    return 0;
}