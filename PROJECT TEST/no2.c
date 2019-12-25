#include<stdio.h>
#include<string.h>
typedef struct
{
    char FName[40];
    char LName[40];
    char PNumber[40];
} Identity;


int admin()
{
    char ch;
    scanf("%c",&ch);
    printf("\n\n\n\t\t\t\t=====================ADMIN LOGIN====================\n");
    printf("\t\t\t\t====================================================\n");
    printf("\t\t\t\t====                                            ====\n");
    for(;;)
    {
        Identity i1;
        printf("\t\t\t\t     User Name: ");
        gets(i1.FName);
        if(strcmp(i1.FName,"M")==0 || strcmp(i1.FName,"m")==0)
            break;
        printf("\t\t  Last Name : ");
        gets(i1.LName);
        printf("\t\t  Phn Number: ");
        gets(i1.PNumber);
        printf("\n\t\t  [Added a contect named '%s']\n\t\t  Details:\n",i1.FName);
        printf("\t\t  Full Name : %s %s\n",i1.FName,i1.LName);
        printf("\t\t  Phn Number: %s\n\n\n",i1.PNumber);
    }
    printf("\n\t\t===========Enter the Choice==========\n");
    printf("\t\t=====================================\n");
    printf("\t\t======     [1] Main Me         ======\n");
    printf("\t\t======     [0] Exit            ======\n");
    printf("\t\t=============           =============\n");
def:
    printf("\t\t           Reply:");
    scanf("%d",&ch);
    switch (ch)
    {
    case 0:
        break;
    case 1:
        printf("\n\n");
        main();
        break;
    default:
        printf("\t\t=========Invalid choice!=========\n");
        goto def;
        break;
    }

    return 0;
}

int user()
{
    char ch;
    scanf("%c",&ch);
    printf("\t\t====Choice:2 LETS ADD NUMBERS====\n");
    printf("\t\t=================================\n");
    printf("\t\t==                             ==\n");
    for(;;)
    {
        Identity i1;
        printf("\t\t  First Name: ");
        gets(i1.FName);
        if(strcmp(i1.FName,"M")==0 || strcmp(i1.FName,"m")==0)
            break;
        printf("\t\t  Last Name : ");
        gets(i1.LName);
        printf("\t\t  Phn Number: ");
        gets(i1.PNumber);
        printf("\n\t\t  [Added a contect named '%s']\n\t\t  Details:\n",i1.FName);
        printf("\t\t  Full Name : %s %s\n",i1.FName,i1.LName);
        printf("\t\t  Phn Number: %s\n\n\n",i1.PNumber);
    }
    printf("\n\t\t===========Enter the Choice==========\n");
    printf("\t\t=====================================\n");
    printf("\t\t======     [1] Main Me         ======\n");
    printf("\t\t======     [0] Exit            ======\n");
    printf("\t\t=============           =============\n");
def:
    printf("\t\t           Reply:");
    scanf("%d",&ch);
    switch (ch)
    {
    case 0:
        break;
    case 1:
        printf("\n\n");
        main();
        break;
    default:
        printf("\t\t=========Invalid choice!=========\n");
        goto def;
        break;
    }

    return 0;
}

int developer()
{
    char ch;
    scanf("%c",&ch);
    printf("\t\t====Choice:2 LETS ADD NUMBERS====\n");
    printf("\t\t=================================\n");
    printf("\t\t==                             ==\n");
    for(;;)
    {
        Identity i1;
        printf("\t\t  First Name: ");
        gets(i1.FName);
        if(strcmp(i1.FName,"M")==0 || strcmp(i1.FName,"m")==0)
            break;
        printf("\t\t  Last Name : ");
        gets(i1.LName);
        printf("\t\t  Phn Number: ");
        gets(i1.PNumber);
        printf("\n\t\t  [Added a contect named '%s']\n\t\t  Details:\n",i1.FName);
        printf("\t\t  Full Name : %s %s\n",i1.FName,i1.LName);
        printf("\t\t  Phn Number: %s\n\n\n",i1.PNumber);
    }
    printf("\n\t\t===========Enter the Choice==========\n");
    printf("\t\t=====================================\n");
    printf("\t\t======     [1] Main Me         ======\n");
    printf("\t\t======     [0] Exit            ======\n");
    printf("\t\t=============           =============\n");
def:
    printf("\t\t           Reply:");
    scanf("%d",&ch);
    switch (ch)
    {
    case 0:
        break;
    case 1:
        printf("\n\n");
        main();
        break;
    default:
        printf("\t\t=========Invalid choice!=========\n");
        goto def;
        break;
    }

    return 0;
}

int fback()
{
    char ch;
    scanf("%c",&ch);
    printf("\t\t====Choice:2 LETS ADD NUMBERS====\n");
    printf("\t\t=================================\n");
    printf("\t\t==                             ==\n");
    for(;;)
    {
        Identity i1;
        printf("\t\t  First Name: ");
        gets(i1.FName);
        if(strcmp(i1.FName,"M")==0 || strcmp(i1.FName,"m")==0)
            break;
        printf("\t\t  Last Name : ");
        gets(i1.LName);
        printf("\t\t  Phn Number: ");
        gets(i1.PNumber);
        printf("\n\t\t  [Added a contect named '%s']\n\t\t  Details:\n",i1.FName);
        printf("\t\t  Full Name : %s %s\n",i1.FName,i1.LName);
        printf("\t\t  Phn Number: %s\n\n\n",i1.PNumber);
    }
    printf("\n\t\t===========Enter the Choice==========\n");
    printf("\t\t=====================================\n");
    printf("\t\t======     [1] Main Me         ======\n");
    printf("\t\t======     [0] Exit            ======\n");
    printf("\t\t=============           =============\n");
def:
    printf("\t\t           Reply:");
    scanf("%d",&ch);
    switch (ch)
    {
    case 0:
        break;
    case 1:
        printf("\n\n");
        main();
        break;
    default:
        printf("\t\t=========Invalid choice!=========\n");
        goto def;
        break;
    }

    return 0;
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
    printf("\t\t\t\t=====================  0.quit  =====================\n");
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
