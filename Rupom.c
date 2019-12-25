#include<stdio.h>

int main()
{
    int a[] = {10, 20, 30, 40, -20, -40, 20, 30, 20, 10, 40};

    int i, newValue = 35;
    a[11] = 35;

    for(i = 0; i < 12; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
