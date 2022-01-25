#include<stdio.h>
int main()
{
    int num, i, a, b;
    scanf("%d", &num);

    for(i=0; i<num; i++)
    {
        scanf("%d %d", &a, &b);
        if(a>b)
            printf(">\n");
        else if(a<b)
            printf("<\n");
        else if(a==b)
            printf("=\n");
    }

    return 0;
}
