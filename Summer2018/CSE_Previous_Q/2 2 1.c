#include<stdio.h>

int main()
{
    int number, last_digit;
    scanf("%d",&number);
    last_digit = number % 10;
    printf("%d\n", last_digit);

    return 0;
}

/*Input:10235
Output:5
*/
