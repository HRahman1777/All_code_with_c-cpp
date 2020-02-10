#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int tc, x, y, sum;
    cin>>tc;
    x=1;
    sum=1;
    while(tc--)
    {
        sum=sum*x;
        x++;
    }
    cout<<sum<<endl;
    return 0;
}


