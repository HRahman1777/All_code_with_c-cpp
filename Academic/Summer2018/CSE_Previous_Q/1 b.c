#include <stdio.h>

int main()
{
    int i, x;
    for(i = 1, x = 1; i < 25; i += 2)
    {
        if(x % 7 == 4)
        {
            x *= 3;
            continue;
        }
        x += i;
        printf("%d\n", x);
        if(x % 10 == 0)
        {
            break;
        }
    }
    return 0;
}

//Output
