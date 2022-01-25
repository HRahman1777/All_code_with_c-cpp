#include<stdio.h>

int main()
{
    char start, end;
    int i;
    scanf("%c %c", &start, &end);
    for(i = start; i <= end; i++)
    {
        printf("%d ", i);
    }
    return 0;
}

//Input:A E
//Output:65 66 67 68 69
