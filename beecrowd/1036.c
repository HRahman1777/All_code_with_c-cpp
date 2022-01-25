#include <stdio.h>
int main()
{
    float a, b, c, x, y, m;
    scanf("%f %f %f", &a, &b, &c);
    if (2 * a == 0 || (b * b) < 4 * a * c)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        m = sqrt((b * b) - 4 * a * c);
        x = (-b + m) / (2 * a);
        y = (-b - m) / (2 * a);
        printf("R1 = %.5f\nR2 = %.5f\n", x, y);
    }
    return 0;
}
