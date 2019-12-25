#include<stdio.h>
int main()
{
    int i, n;
    scanf("%d", &n);
    float r, ar[n], s[n], sum = 0;
    int k=0;
    for(i=0; i<n; i++)
    {
        scanf("%f", &ar[i]);
        sum = sum + ar[i];
        s[k++] = sum;
    }
    for(i=0; i<n; i++)
    {
        r = s[i]/(i+1);
        printf("%f\n", r);
    }
    return 0;
}
