#include<stdio.h>
int main()
{
    int a=10;
    //a = a + 5;
    printf("%-6d %+d\n", a++, a);
    printf("%d\n", a);

    return 0;
}
