#include<stdio.h>
#include<string.h>
int main()
{
    char string[100];
    int c = 0, count[50];
    gets(string);
    for(string[c] = 0; string[c] != '\0' ; string[c]++)
    {
        if(string[c] >= 'a' && string[c] <= 'z')
        {
            count[string[c] - 'a' ]++;

        printf("%c\n", count[c]);
        }

    }
    return 0;
}
