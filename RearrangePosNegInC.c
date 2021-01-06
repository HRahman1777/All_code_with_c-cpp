#include<stdio.h>

void PrintArray(int a[], int Size);

int main()
{
    int Size, i, a[10], Positive[10], Negative[10];
    int Positive_Count = 0, Negative_Count = 0;

    printf("\n Please Enter the Size of an Array: ");
    scanf("%d", &Size);

    printf("\nPlease Enter the Array Elements: ");
    for(i = 0; i < Size; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < Size; i ++)
    {
        if(a[i] >= 0)
        {
            Positive[Positive_Count] = a[i];
            Positive_Count++;
        }
        else
        {
            Negative[Negative_Count]  = a[i];
            Negative_Count++;
        }
    }

    PrintArray(Positive, Positive_Count);
    PrintArray(Negative, Negative_Count);
    return 0;
}

void PrintArray(int a[], int Size)
{
    int i;
    for(i = 0; i < Size; i++)
    {
        printf("%d ", a[i]);
    }
    printf(" ");
}
