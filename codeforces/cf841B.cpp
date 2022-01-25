#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
    lli cnt;
    cin>>cnt;
    lli num[cnt], count=0, count2=0;
    for(lli i=0; i<cnt; i++)
    {
        cin>>num[i];
        if(num[i]%2 == 0)
            count++;
        else
            count2++;
    }
    if(count==cnt)
        cout<<"Second\n";
    else
        cout<<"First\n";

    return 0;
}
