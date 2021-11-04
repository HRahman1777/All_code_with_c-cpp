#include <bits/stdc++.h>
using namespace std;

void minimumBribes(vector<int> q, int n)
{
    int temp, flag = 0, res = 0;
    int i, j;
    vector<int> guard(n + 1);
    for (i = 0; i < n - 1; i++)
    {

        for (j = 0; j < n - i - 1; j++)
        {
            if (q[j] > q[j + 1])
            {
                temp = q[j];
                q[j] = q[j + 1];
                q[j + 1] = temp;
                res++;
                guard[temp]++;
            }
        }

        if (guard[q[i]] > 2)
        {
            flag = 1;
            break;
        }
    }
    if (guard[q[n - 1]] > 2 || flag)
        cout << "Too chaotic\n";

    else
        cout << res << "\n";
}

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> q(n);
        for (int i = 0; i < n; i++)
        {
            int q_item;
            cin >> q_item;
            q[i] = q_item;
        }

        minimumBribes(q, n);
    }

    return 0;
}