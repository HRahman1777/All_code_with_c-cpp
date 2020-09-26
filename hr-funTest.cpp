#include<iostream>
#include<cstdio>
#include<stdio.h>
using namespace std;


int main()
{
    int x, y, z, f;
    scanf("%d %d %d %d", &x, &y, &z, &f);
    int x1, y1, z1, f1;
    int x2, y2, z2, x3, y3, ans;
    if(x>=y)
    {
        x1=x;
    }
    if(x<y)
    {
        x1=y;
    }
    if(y>=z)
    {
        y1=y;
    }
    if(y<z)
    {
        y1=z;
    }
    if(z>=f)
    {
        z1=z;
    }
    if(z<f)
    {
        z1=f;
    }
    if(x>=f)
    {
        f1=x;
    }
    if(x<f)
    {
        f1=f;
    }
    if(x1>=y1)
    {
        x2=x1;
    }
    if(x1<y1)
    {
        x2=y1;
    }
    if(y1>=z1)
    {
        y2=y1;
    }
    if(y1<z1)
    {
        y2=z1;
    }
    if(z1>=f1)
    {
        z2=z1;
    }
    if(z1<f1)
    {
        z2=f1;
    }
    if(x2>=y2)
    {
        x3=x2;
    }
    if(x2<y2)
    {
        x3=y2;
    }
    if(y2>=z2)
    {
        y3=y2;
    }
    if(y2<z2)
    {
        y3=z2;
    }
    if(x3>=y3)
    {
        ans=x3;
    }
    if(x3<y3)
    {
        ans=y3;
    }

    printf("%d", ans);

    return 0;
}

