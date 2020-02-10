#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int i, id, a[10];

    for(i=0; i<10; i++)
        a[i]=0;

    for(i=0; i<8; i++)
    {
        scanf("%d", &id);
        a[id-1]++;
        //cout<<a[id-1]<<endl;
    }
    int max=0;
    for(i=0; i<10; i++)
    {
        if(a[i]>=max)
            max=a[i];
    }

    for(i=0; i<10; i++)
    {
        if(max == a[i])
            cout<<a[i]<<" "<<i+1;
    }

    return 0;
}
