#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m;
    cin>>m;
    vector<int> v;

    int c = 0;
    for(int i=1; i<=10000000; i++)
    {
        int x = i;
        while(x%5 == 0)
        {
            c++;
            x/=5;
        }
        if(c == m)
            v.push_back(i);
    }
    cout<<v.size()<<endl;
    for(int i = 0; i < v.size(); i++)
        cout<<v[i]<<" ";
    if(v.size())
        cout<<"\n";
    return 0;
}
