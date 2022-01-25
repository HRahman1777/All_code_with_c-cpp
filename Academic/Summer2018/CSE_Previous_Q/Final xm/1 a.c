#include<stdio.h>
int doSomething(int n)
{
    if(n != 0)
        return n + doSomething(n - 1);
    else
        return n;
}
int main()
{
    printf("%d\n", doSomething(5));
    return 0;
}
