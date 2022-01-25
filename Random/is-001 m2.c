#include<stdio.h>
#include<string.h>

int main()
{
    int i, l;
    char s[100];
    scanf("%s", s);
    strlwr(s);
    l = strlen(s);
    for(i = 0; i < l; i++)
    {
        if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != 'y')
            printf(".%c",s[i]);
    }
    printf("\n");

    return 0;
}
