#include<stdio.h>
int main()
{
    char arr[100], i;
    gets(arr);
    for(i = 0; arr[i] != '\0'; i++)
    {
        if((arr[i] >= 'A' && arr[i] <= 'Z') || (arr[i] >= 'a' && arr[i] <= 'z'))
            arr[i] = arr[i] + 1;
    }
    puts(arr);
    return 0;
}
