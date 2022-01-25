#include <stdio.h>
int confusion(int *a, int *b)
{
    (*a)++;
    (*b)++;
    return *a + *b;
}
int main(void)
{
    int x = 2, y = 5;
    y = confusion(&x, &y);
    x = confusion(&x, &y);
    printf("X=%d Y=%d\n", x, y);
    return 0;
}

