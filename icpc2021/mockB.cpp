#include<bits/stdc++.h>
using namespace std;
int main()
{

    int tc;
    cin>>tc;
    for(int i=1; i<=tc; i++)
    {
        int k;
        long long int value;
        vector<long long int> d;
        cin>>k;
        while(k--)
        {
            cin>>value;
            d.push_back(value);
        }
        cout<<"Case "<<i<<": "<<(*max_element(d.begin(), d.end()))*(*min_element(d.begin(), d.end()))<<"\n";
    }
    return 0;

}

