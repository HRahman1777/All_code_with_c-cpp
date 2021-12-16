#include <bits/stdc++.h>
using namespace std;

void closestNumber(vector<int> arr)
{
    int len = arr.size();
    vector<int> diff(len), res;
    sort(arr.begin(), arr.end());

    adjacent_difference(arr.begin(), arr.end(), diff.begin());
    int min = *min_element(diff.begin() + 1, diff.end());

    for (int i = 1; i < len; i++)
    {
        if (diff[i] == min)
        {
            cout << arr[i - 1] << " " << arr[i] << " ";
        }
    }
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    closestNumber(arr);

    return 0;
}