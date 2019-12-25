#include<stdio.h>
int main()

{
    int a, b;
    while(1)
    {
        scanf("%d %d", &a, &b);

        int sum = 0;
        if(a <= 0 || b <= 0)
            break;
        else
        {
            if (a > b)
            {
                for (b = b; b <= a; b++)
                {
                    sum = sum + b;
                    printf("%d ", b);
                }
                printf("Sum=%d\n", sum);
            }
            else if(b > a)
            {
                for (a = a; a <= b; a++)
                {
                    sum = sum + a;
                    printf("%d ", a);
                }
                printf("Sum=%d\n", sum);
            }
        }
    }

    return 0;
}
