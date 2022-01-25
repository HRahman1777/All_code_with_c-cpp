#include <stdio.h>

int main()
{
    int n, c, d, t;

    scanf("%d", &n);
    int array[n], count=0;
    for (c = 0; c < n; c++)
        scanf("%d", &array[c]);

    for (c = 1 ; c <= n - 1; c++)
    {
        d = c;

        while ( d > 0 && array[d-1] > array[d])
        {
            t          = array[d];
            array[d]   = array[d-1];
            array[d-1] = t;

            d--;
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}

