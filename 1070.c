#include<stdio.h>
int main()
{
    int N, i;
    scanf("%d", &N);

    for(i = N; i <= N + 11; i++)
    {
        if(i % 2 != 0)

        printf("%d\n", i);
    }

    return 0;
}
