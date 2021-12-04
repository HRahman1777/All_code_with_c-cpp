#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[] = {10, 6, 1, 2, 7};
    int j;
    for (int i = 0; i < 5; i++)
    {
        int temp = a[i];

        int j = i - 1;
        while (temp <= a[j] && j >= 0)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;

        /*
        for (int j = i - 1; j >= 0; j--)
        {
            if (temp <= a[j])
                a[j + 1] = a[j];
            else
                break;
        }
        a[j + 1] = temp;
        */
    }

    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";

    return 0;
}