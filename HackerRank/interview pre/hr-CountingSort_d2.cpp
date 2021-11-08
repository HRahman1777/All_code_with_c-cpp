#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    int temp;
    for (int i = 0; i < n; i++)
    {
        int arr_item;
        cin >> arr_item;
        arr[i] = arr_item;
    }

    vector<int> arr2(100);

    for (int i = 0; i < n; i++)
    {
        arr2[arr[i]]++;
    }

    for (int i = 0; i < 100; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << "\n";

    return 0;
}