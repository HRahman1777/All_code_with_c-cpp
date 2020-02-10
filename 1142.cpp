#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int n, a=1, g=0, x, y, z;
    cin>>n;
    while(1)
    {
        if(g==n)
            break;
        else
        {
            x = a;
            y= a+1;
            z = a+2;
            printf("%d %d %d PUM\n", x, y, z);
            a = a + 4;
            g++;
        }
    }

    return 0;
}

