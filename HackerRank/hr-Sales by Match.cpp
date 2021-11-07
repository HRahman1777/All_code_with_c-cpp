#include <bits/stdc++.h>
using namespace std;


int sockMerchant(int n, vector<int> ar)
{
    vector<int> arr2(101);
    for(int i=0; i<n; i++)
    {
        arr2[ar[i]]++;
    }
    int sum = 0;
    for(int i=0; i<101; i++)
    {
        //cout<<arr2[i]<<" ";
        sum = sum + (arr2[i]/2);
    }

    return sum;
}

int main()
{
    int n, ar_item;
    cin>>n;
    vector<int> ar(n);

    for (int i = 0; i < n; i++)
    {
        cin>>ar_item;
        ar[i] = ar_item;
    }

    int result = sockMerchant(n, ar);
    //sockMerchant(n, ar);

    cout << result << "\n";

    return 0;
}
