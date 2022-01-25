/*Find The Grade Of Marks*/

#include <stdio.h>

int main()
{
    int marks;
    printf("Please Enter The Marks: ");
    scanf("%d", &marks);

    if(marks >= 80)
    {
        printf("A+\n");
    }
    else if(marks >= 70 && marks <= 79)
    {
        printf("B+\n");
    }
    else
    {
        printf("Fail!\n");
    }

    return 0;
}
