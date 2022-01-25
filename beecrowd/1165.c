#include<stdio.h>
int main()
{
    int i, j, num, cs, t;
    scanf("%d",&cs);
    for(i = 0; i < cs; i++)
    {
        scanf("%d", &num);
        if(num == 1 || num == 2)
            printf("%d eh primo\n", num);
        else if (num > 2)
        {
            for(j = 2; j < num; j++)
            {
                if(num % j == 0)
                {
                    t = 1;
                    break;
                }
                else
                    t = 2;
            }
            if(t == 1)
                printf("%d nao eh primo\n", num);
            else if(t == 2)
                printf("%d eh primo\n", num);
        }
    }
    return 0;
}
