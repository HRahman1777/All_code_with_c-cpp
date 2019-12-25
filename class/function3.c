#include<stdio.h>
long long int Number(int n)
{
    if(n >= 1)
    {
        return n * Number(n - 1)
    }
    else
    {
        return 1;
    }
}
int main()
{
    int x;
    long long int y;
    scanf("%d", &n);
    y = Number(x);
    printf("")
}
