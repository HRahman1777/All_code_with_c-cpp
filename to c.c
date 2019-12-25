#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n == 1)
    {
        printf("*\n");
    }
    else if (n == 2)
    {
        printf(" * \n***\n * \n");
    }
    else if (n == 3)
    {
        printf("  *  \n *** \n*****\n *** \n  *  \n");
    }
    return 0;
}
