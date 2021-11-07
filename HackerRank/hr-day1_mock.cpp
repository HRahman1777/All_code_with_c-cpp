#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

lli findMedian(vector<lli> arr)
{
    int l = (arr.size() - 1);
    sort(arr.begin(), arr.end());
    return arr[l / 2];
}

int main()
{
    lli n;
    cin >> n;
    vector<lli> arr(n);

    for (int i = 0; i < n; i++)
    {
        int arr_item;
        cin >> arr_item;
        arr[i] = arr_item;
    }

    int result = findMedian(arr);

    cout << result;

    return 0;
}