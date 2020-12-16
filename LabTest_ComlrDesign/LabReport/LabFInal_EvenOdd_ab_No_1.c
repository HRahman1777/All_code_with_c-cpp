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

    while(1)
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
                printf("Accepted!\n");
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
                    printf("Reject!\n");
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
                printf("Reject!\n");
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
                    printf("Reject!\n");
                    return 0;
                }
            }

        }

        else
        {
            printf("Reject!\n");
            return 0;
        }

        int len = strlen(input);
        if(len == (a+b))
        {
            printf("Accepted!\n");
        }
        else
        {
            printf("Reject!\n");
        }
    }


    return 0;
}
