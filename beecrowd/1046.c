#include<stdio.h>
int main()
{
    int x, y, r;
    scanf("%d %d", &x, &y);
    if(x < y)
    {
        r = y - x;
    }
    else if(x == y)
    {
        r = 24;
    }
    else if(x > y)
    {
        r = 24 - (x - y);
    }
    printf("O JOGO DUROU %d HORA(S)\n", r);

    return 0;
}
