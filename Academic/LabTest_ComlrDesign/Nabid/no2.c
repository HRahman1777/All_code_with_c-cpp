#include<stdio.h>
#include<string.h>
int main(){
    char str1[100]="public static void main ( String []args)";
    char str2[100]="int a=b*c;";
    char str3[100]="result=first+second/third";
    char *word;
    word=strtok(str1," ()[]");
    while(word!=NULL){
        printf("%s\n",word);
        word=strtok(NULL," ()[]");
    }
    word=strtok(str2," =*;");
    while(word!=NULL){
        printf("%s\n",word);
        word=strtok(NULL," =*;");
    }
    word=strtok(str3," =+/");
    while(word!=NULL){
        printf("%s\n",word);
        word=strtok(NULL," =+/");
    }

    return 0;
}
