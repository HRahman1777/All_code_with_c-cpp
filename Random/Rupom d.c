#include<stdio.h>
int main()
{
    int a[11] = {10, 20, 30, 40, -40, 20, 30, 20, 10, 40, 35};
    int i;
    int a10=0, b20=0, c30=0, d35=0, e40=0, fm40=0;
    for(i = 0; i < 11; i++)
    {
        if(a[i] == 10)
            a10++;
        else if(a[i] == 20)
            b20++;
        else if(a[i] == 30)
            c30++;
        else if(a[i] == 35)
            d35++;
        else if(a[i] == 40)
            e40++;
        else if(a[i] == -40)
            fm40++;
    }
    printf("10 = %d\n20 = %d\n30 = %d\n35 = %d\n40 = %d\n-40 = %d\n", a10, b20, c30, d35, e40, fm40);

    return 0;
}
