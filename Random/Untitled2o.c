#include<stdio.h>
int main()
{
    int i = 10, j = 2;
    int NewNumber = 10 * ((++i) + 1 + (++j));


    printf("i is %d and j is %d\n", i, NewNumber);

    return 0;
}
