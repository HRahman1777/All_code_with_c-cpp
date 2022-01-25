#include<iostream>
using namespace std;
typedef long long int lli;
int main()
{
    lli x, y, z;
    cin>>x>>y;
    z = y-1;
    if((x >= 1 && y == 0)||(x >= 1 && y == 1))
        cout<<"No\n";
    else if(z%2 == 0)
    {
        if(x%2 == 0 && x >= z)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    else if(z%2 != 0)
    {
        if(x%2 != 0 && x >= z)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    return 0;
}
