#include<stdio.h>
int main()
{
    int X, Y, z = 0;
    scanf("%d %d", &X, &Y);
    if(X == Y)
    {
        printf("%d\n", z);
    }
    else if(X > Y)
    {
        for(Y = Y + 1; Y < X; Y++)
        {
            if(Y % 2 != 0)
                z = z + Y;
        }
    printf("%d\n", z);
    }
    else if(X < Y)
    {
        for(X = X + 1; X < Y; X++)
        {
            if(X % 2 != 0)
                z = z + X;
        }
        printf("%d\n", z);
    }

    return 0;
}
