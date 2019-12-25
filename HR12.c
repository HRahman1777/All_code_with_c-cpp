#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int ar[102], n, cnt[102] = {0}, c = 0, pairs = 0;
    int i;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
        cnt[ar[i]]++;
    }
    for(i = 0; i < 101; i++)
    {
        if(cnt[i] != 0)
        {
            c = cnt[i] / 2;
            pairs += c;
        }
    }
    printf("%d", pairs);

    return 0;
}
