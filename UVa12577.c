#include<stdio.h>
#include<string.h>

int main()
{
    char str[6];
    int i = 1;
    while(scanf("%s", str)== 1)
    {
        if(strcmp(str, "*") == 0)
            break;
        else if(strcmp(str, "Hajj") == 0)
            printf("Case %d: Hajj-e-Akbar\n", i++);
        else
            printf("Case %d: Hajj-e-Asghar\n", i++);
    }
    return 0;

}
