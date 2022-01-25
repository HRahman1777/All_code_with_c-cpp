#include <stdio.h>

#include <stdlib.h>

#include <string.h>

int main()

{

    char str[100],digit[100];

    int i,j,m=0,n,k;

    gets(str); //enter the string

    n=strlen(str);

    for(i=0; str[i]!='\0'; i++)

    {

        if(str[i]>=48&&str[i]<=57)

        {

            digit[m]=str[i];

            m++;

        }

        for(k=i; k<=n; k++)

        {

            str[i]=str[i+1]; //extracted no. are stored in digit string

        }

        n--;

    }

    digit[m]='\0';

    for(i=0; digit[i]!='\0'; i++)

    {

        printf("%c ",digit[i]);//print all the extracted no.

    }

}
