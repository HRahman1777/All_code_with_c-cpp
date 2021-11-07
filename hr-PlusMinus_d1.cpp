#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    float n = 0, p = 0, z = 0;
    cin >> tc;
    for (int i = 0; i < tc; i++)
    {
        float item;
        cin >> item;
        if (item > 0)
            p++;
        else if (item < 0)
            n++;
        else
            z++;
    }
    printf("%.6f\n%.6f\n%.6f\n", (p / tc), (n / tc), (z / tc));
    return 0;
}