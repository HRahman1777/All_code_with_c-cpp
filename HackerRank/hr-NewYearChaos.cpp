#include <bits/stdc++.h>
using namespace std;

void minimumBribes(vector<int> q, int n)
{
    int flag = 0, res = 0;
    int i, j;
    vector<int> guard(n + 1);
    for (i = n - 1; i >= 0; i--)
    {
        if (q[i] - (i + 1) > 2)
        {
            cout << "Too chaotic\n";
            return;
        }
        int j = i;
        while (j < n - 1 && q[j] > q[j + 1])
        {
            int temp = q[j];
            q[j] = q[j + 1];
            q[j + 1] = temp;
            j++;
            res++;
        }
    }
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