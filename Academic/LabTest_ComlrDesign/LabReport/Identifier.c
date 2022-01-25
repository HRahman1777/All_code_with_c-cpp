#include<stdio.h>
#include<string.h>
int main()
{
    char keyword[32][20]= {"auto","double","int","struct","break","else","long","switch","case","enum",
                           "register","typedef","char","extern","return","union","const","float","short",
                           "unsigned","continue","for","signed","void","default","goto","sizeof",
                           "voltile","do","if","static","while"
                          } ;
    char identifier[100];
    int count=0,i;


    while(1)
    {
        printf("Enter Any String: ");
        count=0;
        int cnt2=0;
        gets(identifier);
        int lent = strlen(identifier);
        if(identifier[lent-1] == '+' || identifier[lent-1] == '/' || identifier[lent-1] == '-' || identifier[lent-1] == '*')
            {
                cnt2++;
                printf("%s is not a identifier\n",identifier);
            }
        else if((identifier[0]>='a' && identifier[0]<='z') || (identifier[0]>='A' && identifier[0]<='Z') || identifier[0]=='_' || identifier[0]=='$')
        {
            for(i=0; i<32; i++)
            {
                if(strcmp(identifier,keyword[i])==0)
                {
                    count=1;
                    break;
                }
            }
            if(count==1)
                printf("%s is a keyword\n",identifier);
            else
                printf("%s is  a variable\n",identifier);
        }

        else if(cnt2==0)
            printf("%s is not a identifier\n",identifier);
    }
    return 0;
}
