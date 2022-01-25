#include<stdio.h>
int main()
{
    int lol;
    scanf("%d", &lol);
    if(lol % 2 == 0)
    {
        if(lol == 2)
        {
            printf("NO\n");
        }
        else
            printf("YES\n");
    }
    else
        printf("NO\n");

    return 0;
}
