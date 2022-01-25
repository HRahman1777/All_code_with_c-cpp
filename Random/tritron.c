#include<stdio.h>

int main()
{
    double a, b, c, d;
    int x, y, z, v;

    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
    if(a>0 && b>0 && c>0 && d>0)
    {
        x = a;
        y = b;
        z = c;
        v = d;
        if(a>x)
            x=x+1;
        if(b>y)
            y=y+1;
        if(c>z)
            z=z+1;
        if(d>v)
            v=v+1;

        printf("%d\n", x+y+z+v);
    }
    return 0;
}
