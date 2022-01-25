#include <stdio.h>
#include <string.h>
int main()
{
    char first_string[999];
    char second_string[999];
    char third_string[999];
    char fourth_string[999];

    printf("First String: ");
    gets(first_string);
    int len1;
    for (len1 = 0; first_string[len1] != '\0'; len1++);

    printf("Second String: ");
    gets(second_string);
    int len2;
    for (len2 = 0; second_string[len2] != '\0'; len2++);
    strcat(first_string, second_string);

    printf("Third String: ");
    gets(third_string);
    int len3;
    for (len3 = 0; third_string[len3] != '\0'; len3++);
    strcat(first_string, third_string);

    printf("Fourth String: ");
    gets(fourth_string);
    int len4;
    for (len4 = 0; fourth_string[len4] != '\0'; len4++);
    strcat(first_string, fourth_string);

    int k = 0, j = 0, len;
    char newStr[1000];
    len = strlen(first_string);
    while(first_string[k] != '\0')
    {
        if(first_string[k] != ' ')
        {

            newStr[j++] = first_string[k];
        }
        k++;
    }
    newStr[j] = '\0';
    printf("\n\nLength Of First String:  %d\n", len1);
    printf("Length Of Second String:  %d\n", len2);
    printf("Length Of Third String:  %d\n", len3);
    printf("Length Of Fourth String:  %d\n", len4);
    int  lenF = strlen(first_string);
    printf("\nAfter concatenated:  ");
    puts(first_string);
    printf("Length Of concatenated String:  %d\n", lenF);
    printf("After Tokenization using white space:  ");
    puts(newStr);
    return 0;
}
