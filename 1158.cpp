#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int tc, x, y, sum;
    cin>>tc;
    while(tc--)
    {
        cin>>x>>y;
        sum=0;
        if(x%2==0)
        {
            x++;
        }
        while(y--)
        {
            sum=sum+x;
            x=x+2;
        }
        cout<<sum<<endl;
    }
    return 0;
}

