#include<stdio.h>

int main()
{
    char str1[100], str2[100];
    int len1=0, len2=0, len, i, j, flag=0;

    gets(str1);
    gets(str2);

    for(j = 0; str1[j] != '\0'; j++)
    {
        len1++;
    }

    for(j = 0; str2[j] != '\0'; j++)
    {
        len2++;
    }


    if(len1>len2)
        len=len1;
    else
        len=len2;


    for(i = 0; i<len; i++)
    {
        if(str1[i] == str2[i])
            flag++;
    }



    if(flag == len)
        printf("strings are same\n");
    else
        printf("strings are not same\n");

    return 0;
}
