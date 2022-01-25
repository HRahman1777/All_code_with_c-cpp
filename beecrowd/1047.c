#include<stdio.h>
int main()
{
    int x, x1, y, y1, r, r1;
    scanf("%d %d %d %d", &x, &x1, &y, &y1);
    r = y - x;

    if (r < 0)
    {
        r = 24 + (y - x);
    }

    r1 = y1 - x1;
    if (r1 < 0)

    {
        r1 = 60 + (y1 - x1);
        r--;
    }

    if (x == y && x1 == y1)

    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }

    else
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", r, r1);

    return 0;
}

