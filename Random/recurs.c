#include<stdio.h>

int main()
{
    r(4);
}
void r(int n)
{
    if(n<=0)
        return;
    printf("%d", n);
    r(n--);

}
