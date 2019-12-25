#include<stdio.h>

int multy(int x,int y, int z)
{
    int temp;
    temp = x*y*z;
    return temp;
}

int main()
{
    int a,b,c,multi;
    scanf("%d%d%d",&a,&b,&c);
    multi= multy(a,b,c);
    printf("%d\n",multi);
    return 0;
}
