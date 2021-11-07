#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, i;
    scanf("%d", &n);
    int a[n];
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < n; i++)
    {
        if(a[i] >= 38)  // grade > 38
        {
            int div = (a[i]/5) + 1; // 73/5= 14 +1= 15
            int next = div * 5; // // next higher multiple of 5
            if(next - a[i] < 3) // diff less than 3
                printf("%d\n", next);
            else
                printf("%d\n", a[i]);

        }
        else
            printf("%d\n", a[i]);
    }
    return 0;
}
