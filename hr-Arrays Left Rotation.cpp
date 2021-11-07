#include <bits/stdc++.h>
using namespace std;

void rotLeft(vector<int> a, int n, int d)
{
    int diff = n-d;
    for(int i=d; i<n; i++)
        cout<<a[i]<<" ";

    for(int i=0; i<d; i++)
        cout<<a[i]<<" ";
}

int main()
{
    int n, d, a_item;
    cin>>n>>d;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin>>a_item;
        a[i] = a_item;
    }

    rotLeft(a, n, d);

    cout<< "\n";

    return 0;
}
