#include<stdio.h>
#include<string.h>

int main()
{
    char str[500];
    printf("Enter the string:");
    gets(str);
    int i, space=0;
    for(i=0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
        {
            space++;
            str[i]=str[i+1];
        }
    }

    printf("Total space: %d\n", space);
    printf("String without space:");

    puts(str);

    return 0;
}
