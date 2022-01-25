#include<stdio.h>

long Permutation(int n, int r);
long Combination(int n, int r);
long Factorial(int x);

long Permutation(int n, int r)
{
    return Factorial(n)/Factorial(n-r);
}

long Combination(int n, int r)
{
    return Permutation(n, r)/Factorial(r);
}

long Factorial(int x)
{
    if (x>=1)
        return x*Factorial(x-1);
    else
        return 1;
}


int main()
{
    int n, r;
    long long int ansPer, ansComb;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter the value of r: ");
    scanf("%d", &r);

    ansPer = Permutation(n, r);
    ansComb = Combination(n, r);

    printf("Permutation is = %ld\n", ansPer);
    printf("Combination is = %ld", ansComb);

    return 0;
}
