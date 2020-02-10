#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    float n, flag=0, tm, avg;
    while(1)
    {
        cin>>n;
        if(n<0 || n>10)
        {
            cout<<"nota invalida\n";
        }
        else
        {
            flag++;
            if(flag==2)
            {
                avg = (tm+n)/2;
                printf("media = %0.2f\n", avg);
                break;
            }
            tm=n;
        }
    }

    return 0;
}
