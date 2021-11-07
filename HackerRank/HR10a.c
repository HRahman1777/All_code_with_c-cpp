#include <math.h>
#include <stdio.h>
#include <string.h>
#include<stdlib.h>
int main()
{
    int h, m, s;
    char tp, b = 'P';

    scanf("%d:%d:%d%c", &h, &m, &s, &tp);

    if(tp == b)
        h += 12;
    printf("%02d:%02d:%02d", h, m, s);

    return 0;
}

