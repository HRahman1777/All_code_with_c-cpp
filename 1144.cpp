#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int n, i;
    cin>>n;
    i=1;
    while(n--)
    {
        cout<<i<<" "<<i*i<<" "<<i*i*i<<endl;
        cout<<i<<" "<<(i*i)+1<<" "<<(i*i*i)+1<<endl;
        i=i+1;
    }

    return 0;
}

