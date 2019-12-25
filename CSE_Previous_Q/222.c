#include<stdio.h>
int main()
{
    int balance, call_rate, time;
    scanf("%d %d %d", &balance, &call_rate, &time);
    if(balance / call_rate >= time)
        printf("Call\n");
    else
        printf("Recharge\n");

    return 0;
}

/*
Input:20 2 5
Output:Call
*/
