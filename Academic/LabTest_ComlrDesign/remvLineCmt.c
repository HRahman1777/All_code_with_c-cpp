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
    int count=0;
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
                lineComment(readF);
            if(d == '*')
            {
                if(count == 1)
                {
                    lineComment(readF);
                    count=0;
                }
                else
                    count=1;
            }
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
