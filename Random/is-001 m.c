#include<stdio.h>
#include<string.h>
int main()
{
    int i, k;
    char arr[101];
    scanf("%s", &arr);
    k = strlen(arr);
    for(i = 0; i < k; i++)
    {
        if(arr[i] >= 'A' && arr[i] <= 'Z')
        {
            arr[i] = arr[i] + 32;
        }
        if(arr[i] != 'a' && arr[i] != 'e' && arr[i] != 'i' && arr[i] != 'o' && arr[i] != 'u' && arr[i] != 'y')
        {
            printf(".%c", arr[i]);
        }
    }
    return 0;
}
