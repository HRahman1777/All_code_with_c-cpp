#include<iostream>
#include<stdio.h>

using namespace std;

int main ()
{
    int year, a, b, c, d;
    cin>>year;
    year++;
    int tempYear;
    tempYear=year;
    int n=1;
    while(n)
    {
        a=year%10;
        year=year/10;

        b=year%10;
        year=year/10;

        c=year%10;
        year=year/10;

        d=year%10;
        year=year/10;


        if(a==b)
            tempYear++;
        else if(a==c)
            tempYear++;
        else if(a==d)
            tempYear++;
        else if(b==c)
            tempYear++;
        else if(b==d)
            tempYear++;
        else if(c==d)
            tempYear++;
        else
        {
            n=0;
            cout<<tempYear;
        }
        year=tempYear;
    }



    return 0;
}
