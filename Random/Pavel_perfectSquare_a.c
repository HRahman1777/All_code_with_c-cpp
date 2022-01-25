#include<stdio.h>
int main()
{
    //Part a Starts Here
    int n, i, flag=0;
    printf("Enter The Number: ");
    scanf("%d", &n);
    for (i = 1; i * i <= n; i++)
    {
        if((n % i == 0) && (n / i == i))
        {
            flag=1;
            break;
        }
    }
    if(flag) printf("Perfect Square\n");
    else printf("Not Perfect\n");
    //Part a End Here

    //Part b Starts Here
    printf("Enter The Number: ");
    scanf("%d", &n);
    i = 1;
    while(i * i <= n)
    {
        if((n % i == 0) && (n / i == i))
        {
            flag=1;
            break;
        }
        i++;
    }
    if(flag) printf("Perfect Square\n");
    else printf("Not Perfect\n");
    //Part b End Here

    //Part c Starts Here
    double j, p;
    printf("Enter The Number: ");
    scanf("%d", &n);
    p = 0.000001;

    for(j = 1; (j*j*j) <= n; j++);

    for(j--; (j*j*j) < n; j += p);

    printf("Cube Root of %d is %.3lf\n", n, j);

    //Part c End Here

    //Part d Starts Here
    double res, temp;
    int np;
    printf("Enter The Number: ");
    scanf("%d", &n);
    printf("Enter The Value of P: ");
    scanf("%d", &np);
    temp=1.0/np;
    res = pow(n, temp);

    printf("%d Root of %d is %.3lf\n", np, n, res);

    //Part d End Here


    return 0;
}
