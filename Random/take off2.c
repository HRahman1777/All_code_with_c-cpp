#include<stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    if (x >= 150)
    {
        printf("Welcome to Blue Division\n");
    }
    else if (x < 150)
    {
        printf("Good things take time\n");
    }

    return 0;
}
