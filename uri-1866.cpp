#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc, n;
    cin>>tc;

    for(int i=0; i<tc; i++)
    {
        cin>>n;
        if(n%2==0)
        {
            cout<<"0\n";
        }
        else if(n%2!=0)
        {
            cout<<"1\n";
        }
    }


    return 0;
}
