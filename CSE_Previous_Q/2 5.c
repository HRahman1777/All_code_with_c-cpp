#include<stdio.h>

int main()
{
    int i, Number, rem, sum = 0;
    scanf("%d", &Number);

    for(i = Number; i > 0; i /= 10)
    {
        sum += i % 10;
    }
    printf("%d\n", sum);
    return 0;
}

//Input:1237
//Output:13
