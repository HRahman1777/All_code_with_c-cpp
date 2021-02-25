#include<stdio.h>
int main()
{
    int subject;
    float mark, total = 0, average, percentage;
    for(subject = 1; subject <= 5; subject++)
    {
        printf("Subject No. %d and it's Marks =", subject);
        scanf("%f", &mark);
        total = total + mark;

    }
    average = total / 5;
    percentage = average;
    printf("Total Marks = %.2f\nAverage of marks = %.2f\nPercentage of Total Marks = %.2f%%\n", total, average, percentage);

    return 0;
}
