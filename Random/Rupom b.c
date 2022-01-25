#include<stdio.h>
int main()
{
    int a[] = {10, 20, 30, 40, -20, -40, 20, 30, 20, 10, 40, 35};

    int i, j, delValue = -20;

    for(i = 0; i < 12; i++)
    {
        if(a[i] == delValue)
        {
            for(j = i; j < 12; j++)
                a[j] = a[j+1];
        }

    }
    for(j = 0; j < 11; j++)
        printf("%d ", a[j]);

    return 0;
}
