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

    int s, low, high, mid;
    printf("\n\nEnter The Value For Binary Search: ");
    scanf("%d", &s);
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(s == arr[mid])
        {
            printf("\nValue Found At The Position %d\n", mid+1);
            exit(0);
        }
        else if(s > arr[mid])
        {
            high=high;
            low=mid+1;
        }
        else
        {
            low=low;
            high=mid-1;
        }
    }
    printf("\nValue Not Found\n");

    return 0;
}

