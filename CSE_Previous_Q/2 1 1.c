#include<stdio.h>

int main()
{
    int x = 5, y = 10, z = 15;
    printf("1. x = %d\n", x *= 5);
    y -= (x--);
    printf("2. x = %d y = %d\n", x, y);
    z = ((++x) - (y--));
    printf("3. z = %d\n", z--);

    return 0;
}
/*Output:
    x = 25
    x = 24 y = -15
    z =40
*/
