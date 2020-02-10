#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{
    char a[]="ab";
    char b[]="ac";

    int res = strcmp(a,b); //one by one a-b (a-a=0, b-c=-1, c-b=1, e-a=1)

    cout<<res<<endl;

    cout<<strlen(a)<<endl; // number of char in a


    cout<<strcat(a, b)<<endl; // a = "abac" (a=a+b)

    strcpy(a, b); // a = b

    return 0;
}
