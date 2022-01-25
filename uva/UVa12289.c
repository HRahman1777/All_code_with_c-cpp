#include<stdio.h>
#include<string.h>

int main()
{
    int n, i;
    char arr[6];
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%s", &arr);
        if(strlen(arr) == 5)
        {
            printf("3\n");
        }
        else if((arr[0] == 't' && arr[1] == 'w') || (arr[0] == 't' && arr[2] == 'o') || (arr[1] == 'w' && arr[2] == 'o'))
        {
            printf("2\n");
        }
        else
            printf("1\n");
    }
}
