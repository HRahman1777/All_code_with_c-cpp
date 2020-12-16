#include <stdio.h>
#include <string.h>
int main()
{
    char first_string[999];
    printf("First String: ");
    gets(first_string);
    int i;
    for (i = 0; first_string[i] != '\0'; ++i);


    char second_string[999];
    printf("Second String: ");
    gets(second_string);
    int i2;
    for (i2 = 0; second_string[i2] != '\0'; ++i2);

    strcat(first_string, second_string);


    char third_string[999];
    printf("Third String: ");
    gets(third_string);
    int i3;
    for (i3 = 0; third_string[i3] != '\0'; ++i3);

    strcat(first_string, third_string);




    char fourth_string[999];
    printf("Fourth String: ");
    gets(fourth_string);
    int i4;
    for (i4 = 0; fourth_string[i4] != '\0'; ++i4);

    strcat(first_string, fourth_string);
    int ii = 0, j = 0, len;
    char mj[1000];
    len = strlen(first_string);

    while(first_string[ii] != '\0')
    {
        if(first_string[ii] != ' ')
        {

            mj[j++] = first_string[ii];
        }
        ii++;
    }
    mj[j] = '\0';
    printf("First string lenth: %d\n",i);
    printf("Second string lenth: %d\n",i2);
    printf("Third string lenth: %d\n",i3);
    printf("Fourth string lenth: %d\n",i4);
    printf("Lenth of concate string : %d\n",len);
    printf("\n\nAfter concate 4 string: ");
    puts(first_string);
    printf("The string after removing all the spaces is: %s", mj);
    return 0;
}
