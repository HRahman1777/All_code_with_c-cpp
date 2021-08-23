#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a = {34,23,1,24,75,33,54,8};
    int k = 60;

    int ans = -1;
    int i = 0, temp = a.size()-1;
    sort(a.begin(), a.end());
    while (i < temp)
    {
        if (a[i] + a[temp] >= k)
        {
            temp --;
        }
        else
        {
            ans = max(ans, a[i]+a[temp]);
            i++;
        }
    }
    cout<<ans<<endl;
    return 0;
}
