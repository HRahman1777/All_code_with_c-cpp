#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char c, *word;
    FILE *readF, *writeF;
    readF=fopen("input.txt","r");
    writeF=fopen("output.txt","w");

    while((c=fgetc(readF))!=EOF)
    {
        fputc(c, writeF);
        if(c==' ')
        {
            while((c=fgetc(readF))==' ')
            {
            }
            fputc(c, writeF);
        }
    }

    return 0;
}
