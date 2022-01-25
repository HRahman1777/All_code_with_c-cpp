#include<stdio.h>
float main()
{
    float x, y, z, resu;
    scanf("%d %d %d", &x, &y, &z);
    resu = average(x, y, z);
    return 0;
}
float average(float a, float b, float c)
{
    float result;
    result = (a + b + c) / 3;
    return result;
}
