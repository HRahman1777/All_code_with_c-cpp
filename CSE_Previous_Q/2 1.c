#include<stdio.h>
int main()
{
    int feet, inches, total_inches;
    float cm, result;
    scanf("%d %d", &feet, &inches);
    total_inches = (feet * 12) + inches;
    cm = total_inches * 2.54;
    printf("%.2f cm\n", cm);

    return 0;
}
