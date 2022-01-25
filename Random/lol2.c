#include<stdio.h>
int main()
{
    int i, num1, num2, limit;
    scanf("%d", &limit);
    for(i = 1; i <= limit; i++)
    {
        scanf("%d %d", &num1, &num2);
        printf("Case %d: %d\n", i, num1 + num2);
    }
    return 0;
}
