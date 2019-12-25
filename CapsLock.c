#include<stdio.h>
#include<string.h>

int main()
{
    int i,c=0, l;
    char s[100];
    scanf("%s",s);
    l = strlen(s);
    for(i=1; i<l; i++)
    {
        if(s[i]>=65&&s[i]<=90)
        {
            c++;
        }
    }
    if(c==l-1)
    {
        for(i=0; i<l; i++)
        {
            if(s[i]>=65&&s[i]<=90)
                s[i]=97+s[i]-65;
            else if(s[i]>=97&&s[i]<=122)
                s[i]=65+s[i]-97;
        }
    }

    printf("%s\n",s);
    return 0;
}

