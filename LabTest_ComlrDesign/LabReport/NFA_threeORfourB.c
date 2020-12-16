#include<stdio.h>
int main()
{
    int loop, len, step;
    char string[1000];
    while(1)
    {
        step = 0;
        printf("Input: ");
        gets(string);
        len = strlen(string);
        for(loop=0; loop<len; loop++)
        {
            if((step == 0) && (string[loop]=='a'))
                step = 1;
            else if((step == 0) && (string[loop]=='b'))
                step = 2;
            else if((step == 1) && (string[loop]=='a'))
                step = 1;
            else if((step == 1) && (string[loop]=='b'))
                step = 2;
            else if((step == 2) && (string[loop]=='a'))
                step = 9;
            else if((step == 2) && (string[loop]=='b'))
                step = 3;
            else if((step == 3) && (string[loop]=='a'))
                step = 9;
            else if((step == 3) && (string[loop]=='b'))
                step = 4;
            else if((step == 4) && (string[loop]=='a'))
                step = 5;
            else if((step == 4) && (string[loop]=='b'))
                step = 5;
            else if((step == 5) && (string[loop]=='a'))
            {
                 step = 5;
            }
            else if((step == 5) && (string[loop]=='b'))
            {
                    step = 9;
            }
        }
        if(step==5 || step == 4)
            printf("Output: Accepted\n\n");
        else
            printf("Output: Rejected\n\n");
    }
    return 0;
}
