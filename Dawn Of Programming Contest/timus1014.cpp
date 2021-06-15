#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> res;
    if(n == 1)
    {
        cout<<"1\n";
        return 0;
    }
    else if(n == 0)
    {
        cout<<"10\n";
        return 0;
    }
    for(int i = 9; i >= 2; --i)
    {
        while(n % i == 0)
        {
            res.push_back(i);
            n /= i;
        }
    }
    if(n == 1)
    {
        for (int i = res.size()-1; i >= 0; --i)
        {
            cout<<res[i];
        }
        cout<<"\n";
    }
    else
    {
        cout<<"-1\n";
    }
    return 0;
}
