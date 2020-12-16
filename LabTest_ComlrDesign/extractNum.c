#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char str[256]="ab234cid*(s349*(20kd";

char tmp[256];


int main()
{

    int x;
    //char str[256];
    //gets(str);
    tmp[0]='\0';
    while (sscanf(str,"%[^0123456789]%s",tmp,str)>1||sscanf(str,"%d%s",&x,str))
    {
        if (tmp[0]=='\0')
        {
            printf("%d\r\n",x);
        }
        tmp[0]='\0';

    }
}
