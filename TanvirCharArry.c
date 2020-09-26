#include<stdio.h>
#include<string.h>
int main()
{
    char name[100];
    int i, size;
    gets(name);
    size = strlen(name);
    for(i=0; i<size; i++)
    {
        if((name[i] >= 65 && name[i] <= 90) || ((name[i] >= 97 && name[i] <= 122)))
        {
            if(name[i] == 122)
            {
                name[i] = 97;
            }
            else if( name[i] == 90)
                name[i] = 65;
            else
                name[i]=name[i]+1;
        }
        else
        {
            name[i]=name[i];
        }
    }

    puts(name);

    return 0;
}
