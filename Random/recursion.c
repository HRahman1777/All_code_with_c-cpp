#include<stdio.h>

void reverse( int num)
{

    if(num<10)
    {
        reverse(num+1);
    }
printf("%d\n",num);
}
int main()
{

    reverse(1);
    return 0;
}
