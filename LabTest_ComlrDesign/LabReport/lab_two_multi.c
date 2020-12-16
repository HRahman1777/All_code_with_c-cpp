#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char sentence[1000]="for(i=0; i< 10; i++)puts();";
    char *word;
    word=strtok(sentence, " ,:.;()=<+");
    while(word != NULL)
    {
        printf("%s\n",word);
        word=strtok(NULL, " ,:.;()=<+");
    }
    return 0;
}

