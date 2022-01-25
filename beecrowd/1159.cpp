#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int x, sum;
    while(1)
    {
        cin>>x;
        if(x==0)
            break;
        if(x%2!=0)
            x++;
        sum=0;
        for(int i=0; i<5; i++)
        {
            sum=sum+x;
            x=x+2;
        }

        cout<<sum<<endl;
    }

    return 0;
}
