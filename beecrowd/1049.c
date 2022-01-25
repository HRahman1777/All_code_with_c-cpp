#include <stdio.h>
#include <string.h>
int main()
{
    char strf1[]="vertebrado", strs1[]="ave", strs2[]="mamifero", strt1[]="carnivoro", strt2[]="onivoro", strt3[]="herbivoro";
    char strf2[]="invertebrado", strs3[]="inseto", strs4[]="anelideo", strt4[]="hematofago";
    char ui1[25], ui2[25], ui3[25];
    scanf("%s", ui1);
    if(strcmp(ui1, strf1) == 0)
    {
        scanf("%s",ui2);
        if(strcmp(ui2, strs1) == 0)
        {
            scanf("%s",ui3);
            if(strcmp(ui3, strt1) == 0)
                printf("aguia\n");
            else if(strcmp(ui3, strt2) == 0)
                printf("pomba\n");
        }
        if(strcmp(ui2, strs2) == 0)
        {
            scanf("%s",&ui3);
            if(strcmp(ui3, strt2) == 0)
                printf("homem\n");
            else if(strcmp(ui3, strt3) == 0)
                printf("vaca\n");
        }
    }
    else if(strcmp(ui1, strf2) == 0)
    {
        scanf("%s",ui2);
        if(strcmp(ui2, strs3) == 0)
        {
            scanf("%s",&ui3);
            if(strcmp(ui3, strt4) == 0)
                printf("pulga\n");
            else if(strcmp(ui3, strt3) == 0)
                printf("lagarta\n");
        }
        if(strcmp(ui2, strs4) == 0)
        {
            scanf("%s",&ui3);
            if(strcmp(ui3, strt4) == 0)
                printf("sanguessuga\n");
            else if(strcmp(ui3, strt2) == 0)
                printf("minhoca\n");
        }
    }
    return 0;
}
