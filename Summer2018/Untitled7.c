#include <stdio.h>
int main()
{
    int  i=10, j=20, k=30;
    float  f=5.5;
    char ch = 'A';

    if(ch >= 10*(i+f))
        printf("True\n");
    else
        printf("False\n");

    return 0;
}

