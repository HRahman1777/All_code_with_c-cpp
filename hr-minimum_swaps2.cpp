#include <bits/stdc++.h>
using namespace std;

void Minimum_Swap(int a[], int n)
{
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] != i + 1)
        {
            int flag = i;
            while (a[flag] != i + 1)
            {
                flag++;
            }
            int temp = a[i];
            a[i] = a[flag];
            a[flag] = temp;
            cnt++;
        }
    }
    cout << cnt << "\n";
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    Minimum_Swap(a, n);

    return 0;
}