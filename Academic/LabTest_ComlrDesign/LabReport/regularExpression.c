#include<stdio.h> 
int main()
{
    int i, length, stage;
    char string[1000];
    while(1)
    {
        stage = 0;
        printf("Input: ");
        gets(string);
        length = strlen(string);
        for(i=0; i<length; i++)
        {
            if((stage == 0) && (string[i]=='a'))
                stage = 1;
            else if((stage == 0) && (string[i]=='b'))
                stage = 7;
            else if((stage == 1) && (string[i]=='a'))
                stage = 3;
            else if((stage == 1) && (string[i]=='b'))
                stage = 6;
            else if((stage == 2) && (string[i]=='a'))
                stage = 7;
            else if((stage == 2) && (string[i]=='b'))
                stage = 4;
            else if((stage == 3) && (string[i]=='a'))
                stage = 3;
            else if((stage == 3) && (string[i]=='b'))
                stage = 2;
            else if((stage == 4) && (string[i]=='a'))
                stage = 7;
            else if((stage == 4) && (string[i]=='b'))
                stage = 4;
            else if((stage == 5) && (string[i]=='a'))
                stage = 7;
            else if((stage == 5) && (string[i]=='b'))
                stage = 4;
            else if((stage == 6) && (string[i]=='a'))
                stage = 7;
            else if((stage == 6) && (string[i]=='b'))
                stage = 5;
            else
                stage = 7;
        }
        if(stage != 7 && stage != 0)
            printf("Output: Accepted\n\n");
        else
            printf("Output: Rejected\n\n");
    }
    return 0;
}


