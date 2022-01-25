#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char sentence[1000]="We are studying Compiler Design.";
    char *word;
    word=strtok(sentence, " ");
    while(word != NULL)
    {
        printf("%s\n",word);
        word=strtok(NULL, " ");
    }
    return 0;
}

