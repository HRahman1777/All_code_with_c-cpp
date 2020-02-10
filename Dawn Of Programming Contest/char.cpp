#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    char city[10];
    scanf("%s", city);
    printf("%s", city);
    printf("\n");
    city[3]=0;
    printf("%s", city);


    return 0;
}
