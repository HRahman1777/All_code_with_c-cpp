#include<stdio.h>
#include<string.h>
int main()
{
    int tc=1, l;
    char c[2000];
    while(tc)
    {
        scanf("%s", c);
        if(c[0] == '-')
            break;

        l = strlen(c);
        int s=0, s2=0;
        for(int i=0; i<l; i++)
        {
            if(c[i] == '{')
                s++;
            if(c[i] == '}')
            {
                if(s>0)
                    s--;
                else
                {
                    s++;
                    s2++;
                }
            }
        }
        s2 = s2+(s/2);
        printf("%d. %d\n",tc,s2);
        tc++;
    }

    return 0;
}
