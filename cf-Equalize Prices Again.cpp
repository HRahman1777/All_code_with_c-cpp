#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc, p;
    double sum, ch;
    cin>>tc;
    while(tc--)
    {
        double ic, nm, t;
        cin>>ic;
        t = ic;
        sum=0;
        while(ic--)
        {
            cin>>nm;
            sum += nm;
        }
        ch = sum/t;
        p = sum/t;
        if(ch > p)
            p++;
        cout<<p<<endl;
    }

    return 0;
}
