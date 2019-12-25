#include<stdio.h>

int main()
{
    float batting_avg, bowling_avg;
    scanf("%f %f", &batting_avg, &bowling_avg);
    if(batting_avg >= 40 && bowling_avg < 30)
    {
        printf("Select as Allrounder\n");
    }
    else if(batting_avg >= 50)
    {
        printf("Select as Batsman\n");
    }
    else if(bowling_avg <25 )
    {
        printf("Select as Bowler\n");
    }
    else
        printf("Do not select\n");

    return 0;
}

//Input:52.23 35.33
//Output:Select as Batsman
