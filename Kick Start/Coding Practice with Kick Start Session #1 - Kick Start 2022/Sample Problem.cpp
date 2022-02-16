/// Coding Practice with Kick Start Session #1 - Kick Start 2022

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    for (int i = 0; i < tc; i++)
    {
        int a, b, sum = 0, value;
        cin >> a >> b;
        for (int j = 0; j < a; j++)
        {
            cin >> value;
            sum += value;
        }
        cout << "Case #" << i + 1 << ": " << sum % b << "\n";
    }

    return 0;
}