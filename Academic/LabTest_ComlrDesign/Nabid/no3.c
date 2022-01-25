#include<stdio.h>
#include<stdlib.h>

void lC(FILE *readF)
{
    char c;
    while((c=fgetc(readF))!=EOF)
    {
        if(c=='\n')
            return;
    }
}

void bC(FILE *readF)
{
    char c;
    while((c=fgetc(readF))!=EOF)
    {
        if(c=='*')
        {
            c = fgetc(readF);
            if (c=='/')
                return;
        }
    }
}

int main()
{
    char c, d;
    FILE *readF, *writeF;
    readF = fopen("in.txt","r");
    writeF = fopen("out.txt","w");

    while((c = fgetc(readF))!= EOF)
    {
        if(c == '/')
        {
            d = fgetc(readF);
            if(d == '/')
                lC(readF);
            else if (d == '*')
                bC(readF);
            else
            {
                fputc(c, writeF);
                fputc(d, writeF);
            }
        }
        else
            fputc(c, writeF);
    }
    fclose(readF);
    fclose(writeF);
    return 0;
}
