#include <stdio.h>
int main()
{
    float a, b = 0, c;
    int x, y = 0;
    for(x = 1; x <= 6; x++)
    {
        scanf("%f", &a);
        if(a >= 0)
        {
            y++;
            b = b + a;
        }
    }
    c = b / y;
    printf("%d valores positivos\n%.1f\n", y, c);

    return 0;
}
