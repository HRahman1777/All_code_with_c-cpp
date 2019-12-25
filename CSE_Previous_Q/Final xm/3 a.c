#include<stdio.h>
int kuddos(int x, int y)
{
    if(y % x == 0 || x % y == 0)
    {
        return "Sao Multiplos\n";
    }
    else
        return "Nao sao Multiplos\n";

}
int main()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    int kuddos(num1, num2);

    return 0;
}
