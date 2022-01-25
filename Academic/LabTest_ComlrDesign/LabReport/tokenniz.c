#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char c, *word;
    FILE *fpr, *fpw;
    fpr=fopen("read.txt","r");
    fpw=fopen("write.txt","w");
    while((c=fgetc(fpr))!=EOF)
    {
        fputc(c, fpw);
        if(c==' ')
        {
            while((c=fgetc(fpr))==' ')
            {
            }
            fputc(c, fpw);
        }
    }
    return 0;
}

