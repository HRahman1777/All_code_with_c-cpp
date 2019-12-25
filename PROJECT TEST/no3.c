#include<stdio.h>
#include<string.h>
typedef struct
{
    char FName[40];
    char LName[40];
    char PNumber[40];
} Identity;


void subadmin()
{
    system("cls");//Main menu
    printf("\t\t=====================================\n");
    printf("\t\t=====================================\n");
    printf("\t\t===============MAIN MENU=============\n");
    printf("\t\t=====     1.Add a new Contact   =====\n");
    printf("\t\t=====     2.View all contacts   =====\n");
    printf("\t\t=====     3.Search a Contact    =====\n");
    printf("\t\t=====     4.Edit a Contact      =====\n");
    printf("\t\t=====     5.Delete a Contact    =====\n");
    printf("\t\t=====                           =====\n");
    printf("\t\t===============0.quit================\n");
    printf("\t\t=====================================\n");
}

void admin()
{
    Identity UserN,Pass;
    printf("\n\n\n\t\t\t\t=====================ADMIN LOGIN====================\n");
    printf("\t\t\t\t====================================================\n");
    printf("\t\t\t\t====          press'0'to back main menu         ====\n");
    for(;;)
    {
login:
        printf("\n\t\t\t\t     User Name: ");
        scanf(" %s",UserN.FName);
        if(strcmp(UserN.FName,"mdmasidulhasan27@gmail.com")==0)
        {
pass:
            printf("\t\t\t\t     Password : ");
            scanf(" %s",Pass.FName);
            if(strcmp(Pass.FName,"Book")==0)
            {
                subadmin();
            }
            else
            {
                printf("\t\t\t\t=================Invalid Password!=================\n\n");
                goto pass;
            }
        }
        else if(strcmp(UserN.FName,"0")==0)
        {
            system("cls");
            main();
        }
        else
        {
            printf("\t\t\t\t=================Invalid User Name!=================\n");
            goto login;
        }
    }

    return;
}



void user()
{

    return;
}



void developer()
{

    return;
}



void fback()
{

    return;
}







int main()
{
    int i;
    printf("\n\n\n\t\t\t\t==============LIBRARY MANAGEMENT SYSTEM=============\n");
    printf("\t\t\t\t====================================================\n");
    printf("\t\t\t\t======================MAIN MENU=====================\n");
    printf("\t\t\t\t====                                            ====\n");
    printf("\t\t\t\t====     1.Admin                   2.User       ====\n");
    printf("\t\t\t\t====                                            ====\n");
    printf("\t\t\t\t====     3.Developer               4.Feed       ====\n");
    printf("\t\t\t\t====       Info                      Back       ====\n");
    printf("\t\t\t\t=======================0.Exit=======================\n");
    printf("\t\t\t\t====================================================\n");
    printf("\t\t\t\t=====                                          =====\n");
    for(;;)
    {
div:
        printf("\t\t\t\t     Reply: ");
        scanf("%d",&i);
        if(i==1)
        {
            system("cls");
            admin();
        }
        else if(i==2)
        {
            system("cls");
            user();
        }
        else if(i==3)
        {
            system("cls");
            developer();
        }
        else if(i==4)
        {
            system("cls");
            fback();
        }
        else if(i==0)
        {
            system("cls");
            printf("\n\n\n\n\n\n\t\t\t\t===============('.')==GOOD BYE==('.')==============\n");
            printf("\t\t\t\t====================From Library===================\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
            break;
        }
        else
        {
            printf("\n\t\t\t\t==================Invalid Choice!==================\n");
            goto div;
        }
    }
    return 0;
}
