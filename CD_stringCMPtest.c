#include<stdio.h>
int main()
{
    char str1[100], str2[100];
    int length1=0, length2=0, length, i, j, m=0;

    gets(str1);
    gets(str2);

    for(j = 0; str1[j] != '\0'; j++)
    {
        length1++;
    }

    for(j = 0; str2[j] != '\0'; j++)
    {
        length2++;
    }


    if(length1>length2)
        length=length1;
    else
        length=length2;


    for(i = 0; i<length; i++)
    {
        if(str1[i] == str2[i])
            m++;
    }
    if(m == length)
        printf("strings are same\n");
    else
        printf("strings are not same\n");
   return 0;
}
