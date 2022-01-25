#include<stdio.h>
int main()
{
    int i, a, sum = 0;
    scanf("%d", &a);
    for(i = 0; i <= a; i = i + 1)
    {

        sum = sum + i;

    }
printf("sum is %d\n", sum);
    return 0;
}
