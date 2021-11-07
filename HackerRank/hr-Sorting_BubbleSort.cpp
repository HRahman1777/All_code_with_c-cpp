#include <bits/stdc++.h>
using namespace std;

void countSwaps(vector<int> a)
{
    int temp, cnt = 0;
    for (int i = 0; i < a.size() - 1; i++)
    {
        for (int j = 0; j < a.size() - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                cnt++;
            }
        }
    }

    cout << "Array is sorted in " << cnt << " swaps.\n";
    cout << "First Element: " << a[0] << "\n";
    cout << "Last Element: " << a[a.size() - 1] << "\n";
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        int a_item;
        cin >> a_item;
        a[i] = a_item;
    }

    countSwaps(a);

    return 0;
}
