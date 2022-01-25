#include<stdio.h>
#include<stdlib.h>
void lineComment(FILE *readF)
{
    char c;
    while((c=fgetc(readF))!=EOF)
    {
        if(c=='\n')
            return;
    }
}
int main()
{
    char c, d;
    FILE *readF, *writeF;
    readF = fopen("input.txt","r");
    writeF = fopen("output.txt","w");
    while((c = fgetc(readF))!= EOF)
    {
        if(c==' ')
        {
            if (d != ' ')
                fputc(c, writeF);
            d = '0';
            while((c=fgetc(readF))==' ')
            {
            }
        }
        if(c == '/')
        {
            d = fgetc(readF);
            if(d == '/')
                lineComment(readF);
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

