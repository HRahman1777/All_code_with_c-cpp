#include<stdio.h>
int main()
{
    int n, arr[1000], i, j, t;
    printf("Enter The Size Of Array: ");
    scanf("%d", &n);
    printf("\nEnter The Array: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i = 1; i < n; i++)
    {
        j = i;
        while(j > 0 && arr[j-1] > arr[j])
        {
            t = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = t;
            j--;
        }
    }
    printf("\nSorted List In Ascending Order: \n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
