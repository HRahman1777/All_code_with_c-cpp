#include<stdio.h>
int main()
{
    int i, students[10], sum = 0, score_above_avg = 0;
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &students[i]);
        sum += students[i];
    }
    for(i = 0; i < 10; i++)
    {
        if(students[i] > sum / 10)
        {
            score_above_avg++;
        }
    }
    printf("%d\n", score_above_avg);

    return 0;
}

//Input:8 7 10 2 5 7 3 6 7 3
//Output:6
