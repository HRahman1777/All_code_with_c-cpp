#include<stdio.h>
#include<string.h>

int main()
{
    char str[101], i, k;
    scanf("%s", str);
    strlwr(str);
    k = strlen(str);
    if(str[0] >= 'a' && str[0] <= 'z')
            str[0] = str[0] - 32;

    for(i = 0; i < k; i++)
    {
        printf("%c", str[i]);
    }

    printf("\n");
    return 0;
}

