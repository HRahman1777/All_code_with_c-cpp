#include <stdio.h>
#include <string.h>
int main()
{
    char first_string[1000];
    char second_string[1000];
    char third_string[1000];
    char fourth_string[1000];
    char fifth_string[1000];

    printf("First String: ");
    gets(first_string);
    int count;
    for (count = 0; first_string[count] != '\0'; count++);


    printf("Second String: ");
    gets(second_string);
    int count2;
    for (count2 = 0; second_string[count2] != '\0'; count2++);
    strcat(first_string, second_string);


    printf("Third String: ");
    gets(third_string);
    int count3;
    for (count3 = 0; third_string[count3] != '\0'; count3++);
    strcat(first_string, third_string);


    printf("Fourth String: ");
    gets(fourth_string);
    int count4;
    for (count4 = 0; fourth_string[count4] != '\0';count4++);
    strcat(first_string, fourth_string);


    printf("Fifth String: ");
    gets(fifth_string);
    int count5;
    for (count5 = 0; fifth_string[count5] != '\0'; count5++);
    strcat(first_string, fifth_string);
    int len=0;
    len = strlen(first_string);

    printf("First String Length: %d\n",count);
    printf("Second String Length: %d\n",count2);
    printf("Third String Length: %d\n",count3);
    printf("Fourth String Length: %d\n",count4);
    printf("Fifth String Length: %d\n\n",count5);
    printf("After Concatenate New String is: ");
    puts(first_string);
    printf("After Concatenation String : %d\n",len);
    return 0;
}
