#include<stdio.h>
#include<string.h>

int main(){
    char first_string[999]="public static void main ( String []args)";
    char second_string[999]="int a=b*c;";
    char third_string[999]="result=first+second/third";
    char *block_by;

    block_by=strtok(first_string," ()[]");
    while(block_by!=NULL){
        printf("%s\n",block_by);
        block_by=strtok(NULL," ()[]");
    }

    block_by=strtok(second_string," =*;");
    while(block_by!=NULL){
        printf("%s\n",block_by);
        block_by=strtok(NULL," =*;");
    }

    block_by=strtok(third_string," =+/");
    while(block_by!=NULL){
        printf("%s\n",block_by);
        block_by=strtok(NULL," =+/");
    }

    return 0;
}
