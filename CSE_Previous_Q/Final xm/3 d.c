#include <stdio.h>
int main()
{
    float Celsius[]= {10,20,30,40,50}, Fahrenheit[10];
    int i;
    for(i=0; i<5; i++)
    {
        Fahrenheit[i] = (Celsius[i] * 9 / 5) + 32;
    }
    for(i=0; i<5; i++)
    {
        printf("%.2f ", Fahrenheit[i]);
    }
    return 0;
}
