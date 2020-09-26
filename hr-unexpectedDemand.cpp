#include <bits/stdc++.h>

using namespace std;


int filledOrders(vector<int> order, int k)
{
    sort(order.begin(), order.end());
    int ans=0;
    if(order[0]>k)
        return ans;
    else {
        for(int i=0; i<order.size(); i++)
        {
            if(order[i] <= k)
            {
                ans++;
                k -= order[i];
            }
        }

        return ans;
    }
}

int main()
{
    int tc, totalK;
    vector<int> arr;
    cin>>tc;
    for(int i=0; i<tc; i++)
    {
        int val;
        cin>>val;
        arr.push_back(val);
    }
    cin>>totalK;

    int res = filledOrders(arr, totalK);
    cout<<res;
    return 0;
}
