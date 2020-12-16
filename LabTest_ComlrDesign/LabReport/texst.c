#include<stdio.h>
#include<string.h>

int isOddOrEven(int a)
{
    if(a%2 == 0)
        return 1;
    else
        return 0;
}



int main()
{

    char input[100];

    int i, length,a=0,b=0, res,j=0;

    gets(input);
    length = strlen(input);

    if(input[j] == 'a')
    {
        while(input[j] == 'a')
        {
            a++;
            j++;
        }

        res = isOddOrEven(a);
        if(res == 1)
        {
            printf("This string not accepted\n");
            return 0;
        }
        if(input[j] == 'b')
        {
            while(input[j] == 'b')
            {
                b++;
                j++;
            }

            res = isOddOrEven(b);
            if(res == 0)
            {
                printf("This string not accepted\n");
                return 0;
            }
        }


    }

    else if(input[j] == 'b')
    {
        while(input[j] == 'b')
        {
            b++;
            j++;
        }

        res = isOddOrEven(b);
        if(res == 0)
        {
            printf("This string not accepted\n");
            return 0;
        }

        if(input[j] == 'a')
        {
            while(input[j] == 'a')
            {
                a++;
                j++;
            }

            res = isOddOrEven(a);
            if(res == 1)
            {
                printf("This string not accepted\n");
                return 0;
            }
        }

    }

    else
    {
        printf("This string not accepted\n");
        return 0;
    }

    int len = strlen(input);
    if(len == (a+b))
    {
        printf("This string is accepted");
    }
    else
    {
        printf("This string not accepted\n");
    }


    return 0;
}
