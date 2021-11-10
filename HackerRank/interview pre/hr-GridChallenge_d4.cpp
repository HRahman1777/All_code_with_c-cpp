#include <bits/stdc++.h>
using namespace std;

string gridChallenge(vector<string> grid)
{
    int siz = grid.size(), flag = 1;
    for (int i = 0; i < siz; i++)
    {
        for (int j = 0; j < siz - 1; j++)
        {
            if (grid[j][i] > grid[j + 1][i])
            {
                flag = 0;
                break;
            }
            flag = 1;
        }
        if (flag == 0)
            break;
    }

    if (flag == 0)
        return "NO";
    else
        return "YES";
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<string> grid(n);

        for (int i = 0; i < n; i++)
        {
            string grid_item;
            cin >> grid_item;
            sort(grid_item.begin(), grid_item.end());
            grid[i] = grid_item;
        }

        string result = gridChallenge(grid);

        cout << result << "\n";
    }

    return 0;
}
