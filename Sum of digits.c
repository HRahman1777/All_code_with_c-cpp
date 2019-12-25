#include<stdio.h>
int main()
{
    int num , i;
    int sum = 0, res = 0;
    scanf("%d", &num);

    for(i = num; i > 0; i=i/10)
    {
        sum = num  % 10;
        num = num / 10;

        res = res+sum;

    }

    printf("%d\n", res);

    return 0;
}
