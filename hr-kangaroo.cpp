#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1, v1, x2, v2, sm1, sm2, i;
    cin>>x1>>v1>>x2>>v2;
    sm1 = x1;
    sm2 = x2;
    for(i=0; i<10000; i++)
    {
        sm1 += v1;
        sm2 += v2;
        if(sm1==sm2)
        {
            cout<<"YES"<<endl;
            break;
        }

    }
    if(i==10000)
        cout<<"NO"<<endl;

    return 0;
}
