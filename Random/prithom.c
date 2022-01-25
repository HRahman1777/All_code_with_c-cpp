#include<stdio.h>
#include<string.h>
int main()
{
    char str1[] = "Prithom sala";
    char str2[] = "Prithommm Madari";
    strcpy(str1, str2);
    //strcat(str1, str2);
    printf("%s\n", str1);
    return 0;
}
