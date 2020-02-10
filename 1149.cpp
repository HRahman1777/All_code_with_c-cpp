#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int a, n, ex=1, sum=0;
    cin>>a>>n;
    while(ex)
    {
        if(n>0)
            ex=0;
        else
            cin>>n;
    }
    while(n--)
    {
        sum=sum+a;
        a++;
    }
    cout<<sum<<endl;

    return 0;
}


