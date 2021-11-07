#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int arr_row_item;
            cin >> arr_row_item;
            arr[i][j] = arr_row_item;
        }
    }

    int l = 0, r = 0;

    for (int i = 0; i < n; i++)
    {
        l += arr[i][i];
    }
    for (int i = 0, j = n - 1; i < n; i++, j--)
    {
        r += arr[i][j];
    }

    int result = abs(l - r);

    cout << result << "\n";

    return 0;
}