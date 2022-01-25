#include <stdio.h>
int main()
{
    int x, y, m, d;
    scanf("%d", &x);

    y = x / 365;
    m = (x - (y * 365)) / 30;
    d = (x - (y * 365)) - (m * 30);

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", y, m, d);
    return 0;
}
