#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    if(n<6)
    {
        cout<<"1\n";
    }
    else
    {
        int i;
        i = n/6;
        cout<<i+1;
    }
    return 0;

}
