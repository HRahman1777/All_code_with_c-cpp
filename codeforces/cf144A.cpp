#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    int line[tc];
    if(tc>=1)
    {
        cin>>line[0];
        int max=line[0], min=line[0], m=0,n=0;
        for(int i=1; i<tc; i++)
        {
            cin>>line[i];
            if(min<line[i])
            {
                min = line[i];
                m = i;
            }
            if(max>=line[i])
            {
                max = line[i];
                n =i;
            }
        }
        int sum=0;
        if(line[0] == min && line[tc-1] == max)
        {
            cout<<sum<<endl;
        }
        else if(m>n)
        {
            int tm = ((tc-1)- n)-1;
            sum = tm+m;
            cout<<sum<<endl;
        }
        else
        {
            int tm = (tc-1)- n;
            sum = tm+m;
            cout<<sum<<endl;
        }
    }

    return 0;
}
