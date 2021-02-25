#include <stdio.h>

int main()
{
    int number, i, rem, count = 0, digit, result = 0, z;
    scanf("%d", &number);
    for(i = number; i != 0; i = i / 10)
    {
        count++;
    }
    digit = count;
    printf("Here have total %d digits\n", digit);

    for(i = number; i != 0; i = i / 10)
    {
        rem = i % 10;
        z = ( pow(rem, digit) );
        result = result + z;

        printf("rem = %d ", rem);
        printf("  z = %d ", z);
        printf(" result = %d \n", result);
    }

    printf("\n%d\n", result);

    return 0;
}
