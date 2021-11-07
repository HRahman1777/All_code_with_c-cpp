#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, arr_row_item;
    cin>>n;
    int arr[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr_row_item;
            arr[i][j] = arr_row_item;
        }
    }

    int res1 = 0;
    for(int i=0, j=0; i<n; i++, j++)
    {
        res1 = res1 + arr[i][j];
    }

    int res2 = 0;
    for(int i=0, j=n-1; i<n; i++, j--)
    {
        res2 = res2 + arr[i][j];
    }

    int result = abs(res1-res2);


    cout << result << "\n";

    return 0;
}

