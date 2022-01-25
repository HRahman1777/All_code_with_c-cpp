#include<stdio.h>
void Serial(int num)
{
    if(num > 10)
    {
        return;
    }
    else
    {
        printf("%d\n", num);
        Serial(num + 1);
    }
}
int main()
{
    int start = 1;
    Serial(start);
    return 0;
}
