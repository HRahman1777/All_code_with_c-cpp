#include <stdio.h>
#include <limits.h>

int main()
{

    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    printf("Output = %c \n", c-32);

    printf("Binary value of %c = ", c);
    for ( int i = CHAR_BIT; i-- != 0; )
    {
        printf("%u", ( unsigned char )c >> i & 1 );
    }

    return 0;
}
