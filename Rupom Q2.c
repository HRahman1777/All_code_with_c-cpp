#include<stdio.h>
#include<string.h>

int main()
{
    char ar[32] = "Daffodill Internation University";
    char ar2[32];
    int i, j;
    for(i = 0, j=31; i < 32; i++, j--)
        {
                ar2[j] = ar[i];
        }
    for(i = 0; i < 32; i++)
        printf("%c", ar2[i]);

    return 0;

}
