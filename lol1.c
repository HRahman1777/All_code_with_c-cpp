#include<stdio.h>
int main()
{
    int vala, kala;
    while(scanf("%d %d", &vala, &kala) != EOF)
    {
        printf("%d\n", vala + kala);
    }
    return 0;
}
