#include<stdio.h>
int main()
{
    int i, j, x, y;
    y = 7;
    for(i = 1; i <= 9; i = i + 2)
    {
        for(x = 1, j = y; x <= 3; x++, j--)
            printf("I=%d J=%d\n", i, j);

        y = y + 2;
    }

    return 0;
}
