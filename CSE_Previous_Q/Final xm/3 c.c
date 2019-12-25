#include<stdio.h>
int main()
{
    char str1[100];
    int i, vow = 0, con = 0;
    gets(str1);
    for(i = 0; str1[i] != '\0'; i++)
    {
        if(str1[i] >= 'A' && str1[i] <= 'Z')
        {
            if(str1[i] == 'A' || str1[i] == 'E' || str1[i] == 'I' || str1[i] == 'O' || str1[i] == 'U')
            {
                vow++;
            }
            else
                con++;
        }
    }
    printf("%d Vowels and %d Consonants\n", vow, con);
    return 0;
}
