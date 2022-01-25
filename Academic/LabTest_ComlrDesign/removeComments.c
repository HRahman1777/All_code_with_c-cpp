#include<stdio.h>
#include<stdlib.h>

void lineCommentCh(FILE *readF)
{
    char c;
    while((c=fgetc(readF))!=EOF)
    {
        if(c=='\n')
            return;
    }
}

void blockCommentCh(FILE *readF)
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
    readF = fopen("input.txt","r");
    writeF = fopen("output.txt","w");

    while((c = fgetc(readF))!= EOF)
    {
        if(c == '/')
        {
            d = fgetc(readF);
            if(d == '/')
                lineCommentCh(readF);
            else if (d == '*')
                blockCommentCh(readF);
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
