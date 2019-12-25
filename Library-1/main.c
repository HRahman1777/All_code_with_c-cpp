#include<stdio.h>
#include<string.h>
#include<ctype.h>
typedef struct
{
    char FName[40];
    char LName[40];
    char PNumber[40];
    char BookN[80];
    char WriterN[80];

} Identity;
char Admin_Name[60],A_user_Name[60],Admin_pass[60];
FILE *admin_name;
FILE *save_admin_name;
FILE *save_admin_pass;

void addbk()
{

}

void view()
{

}

void editbooki()
{

}

void dlt()
{

}

void search()
{

}
void editadmn()
{
    int i;
    char faka;
    Identity an,ai,ap;
    system("cls");
    printf("\n\n\n\t\t\t\t==============_________________________=============\n");
    printf("\t\t\t\t=============|LIBRARY MANAGEMENT SYSTEM|============\n");
    printf("\t\t\t\t====================================================\n");
    printf("\t\t\t\t====================================================\n");
    printf("\t\t\t\t========================================[Admin ID]==\n");
    admin_name = fopen("admin_name.text","r");
    fscanf(admin_name,"%[^\n]",Admin_Name);
    printf("\t\t\t\t===============================[%s]\n",Admin_Name);
    fclose(admin_name);
    printf("\t\t\t\t====================================================\n");
    printf("\t\t\t\t==                                                ==\n");
    printf("\t\t\t\t==              1. Change Name                    ==\n");
    printf("\t\t\t\t==              2. Change User ID                 ==\n");
    printf("\t\t\t\t==              3. Change Password                ==\n");
    printf("\t\t\t\t====================================================\n");
    printf("\t\t\t\t=========================================[0. Back]==\n");
    printf("\t\t\t\t==                                                ==\n");
    printf("\t\t\t\t==                                                ==\n");
div:
    printf("\t\t\t\t     Reply: ");
    scanf(" %d",&i);
    scanf("%c",&faka);
    while(1)
    {
        if(i==1)
        {

            printf("\t\t\t\t     User Name: ");
            gets(Admin_Name);
            admin_name = fopen("admin_name.text","w");
            fprintf(admin_name,"%s",Admin_Name);
            fclose(admin_name);
            printf("\n\t\t\t\t[Successfully Saved Name]\n\n");
            goto div;
        }
        else if(i==2)
        {

            printf("\t\t\t\t     User ID: ");
            gets(A_user_Name);
            save_admin_name = fopen("admin_user_name.text","w");
            fprintf(save_admin_name,"%s",A_user_Name);
            fclose(save_admin_name);
            printf("\n\t\t\t\t[Successfully Saved User Name]\n\n");
            goto div;
        }
        else if(i==3)
        {

            printf("\t\t\t\t     User Password: ");
            gets(Admin_pass);
            save_admin_pass = fopen("save_admin_pass.text","w");
            fprintf(save_admin_pass,Admin_pass);
            fclose(save_admin_pass);
            printf("\n\t\t\t\t[Successfully Saved Password]\n\n");
            goto div;
        }
        else if(i==0)
        {
            subadmin();
        }
        else
        {
            printf("\n\t\t\t\t\tInvalid Input!!!\n\n");
            goto div;
        }
    }
}




void subadmin()
{
    int i;
    system("cls");
    printf("\n\n\n\t\t\t\t==============_________________________=============\n");
    printf("\t\t\t\t=============|LIBRARY MANAGEMENT SYSTEM|============\n");
    printf("\t\t\t\t====================================================\n");
    printf("\t\t\t\t====================================================\n");
    printf("\t\t\t\t========================================[Admin ID]==\n");
    admin_name = fopen("admin_name.text","r");
    fscanf(admin_name,"%[^\n]",Admin_Name);
    printf("\t\t\t\t===============================[%s]\n",Admin_Name);
    fclose(admin_name);
    printf("\t\t\t\t====================================================\n");
    printf("\t\t\t\t==                                                ==\n");
    printf("\t\t\t\t==              1. Add a Book Information         ==\n");
    printf("\t\t\t\t==              2. View all Books                 ==\n");
    printf("\t\t\t\t==              3. Edit a Book Information        ==\n");
    printf("\t\t\t\t==              4. Delete a Book                  ==\n");
    printf("\t\t\t\t==              5. Search a Book                  ==\n");
    printf("\t\t\t\t==              6. Edit User Id                   ==\n");
    printf("\t\t\t\t==              7. User Messages                  ==\n");
    printf("\t\t\t\t====================================================\n");
    printf("\t\t\t\t======================================[0. Log Out]==\n");
    printf("\t\t\t\t==                                                ==\n");
    printf("\t\t\t\t==                                                ==\n");
div:
    printf("\t\t\t\t     Reply: ");
    scanf(" %d",&i);
    if(i==1)
    {
        system("cls");
        addbk();
    }
    else if(i==2)
    {
        system("cls");
        view();
    }
    else if(i==3)
    {
        system("cls");
        editbooki();
    }
    else if(i==4)
    {
        system("cls");
        dlt();
    }
    else if(i==5)
    {
        system("cls");
        search();
    }
    else if(i==6)
    {
        system("cls");
        editadmn();
    }
    else if(i==7)
    {
        system("cls");
        msgs();
    }

    else if(i==0)
    {
        system("cls");
        main1();
    }
    else
    {
        printf("\n\t\t\t\t==================Invalid Choice!==================\n");
        goto div;
    }
}

void admin()
{
    Identity UserN,Pass;
    printf("\n\n\n\t\t\t\t==============_________________________=============\n");
    printf("\t\t\t\t=============|LIBRARY MANAGEMENT SYSTEM|============\n");
    printf("\t\t\t\t====================================================\n");
    printf("\t\t\t\t====================================================\n");
    printf("\t\t\t\t====================[ADMIN LOGIN]===================\n");
    printf("\t\t\t\t====================================================\n");
    printf("\t\t\t\t====          press'0'to back main menu         ====\n");
    for(;;)
    {
login:
        printf("\n\t\t\t\t     User Name: ");
        char id[60],pass[60];
        scanf(" %[^\n]",UserN.FName);
        save_admin_name=fopen("admin_user_name.text","r");
        fscanf(save_admin_name,"%s",A_user_Name);
        fclose(save_admin_name);
        if(strcmp(UserN.FName,A_user_Name)==0)
        {
pass:
            printf("\t\t\t\t     Password : ");
            save_admin_pass = fopen("save_admin_pass.text","r");
            fscanf(save_admin_pass,"%s",Admin_pass);
            scanf(" %s",Pass.FName);
            fclose(save_admin_pass);
            if(strcmp(Pass.FName,Admin_pass)==0)
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
            main1();
        }
        else
        {
            printf("\t\t\t\t=================Invalid User Name!=================\n");
            goto login;
        }
    }

    return;
}
















void creat_uid()
{

}



void userB()
{

}

void msgs()
{

}

void editusr()
{

}

void subuser()
{
    int i;
    Identity rply;
    system("cls");
    printf("\n\n\n\t\t\t\t==============_________________________=============\n");
    printf("\t\t\t\t=============|LIBRARY MANAGEMENT SYSTEM|============\n");
    printf("\t\t\t\t====================================================\n");
    printf("\t\t\t\t====================================================\n");
    printf("\t\t\t\t=========================================[User ID]==\n");
    printf("\t\t\t\t===============================[Md. Masidul Hasan]==\n");
    printf("\t\t\t\t====================================================\n");
    printf("\t\t\t\t==                                                ==\n");
    printf("\t\t\t\t==              1. My Owend Books                 ==\n");
    printf("\t\t\t\t==              2. View all Books                 ==\n");
    printf("\t\t\t\t==              3. Search a book                  ==\n");
    printf("\t\t\t\t==              4. Delete a Book                  ==\n");
    printf("\t\t\t\t==              5. Share Idea's                   ==\n");
    printf("\t\t\t\t==              6. Edit User Id                   ==\n");
    printf("\t\t\t\t====================================================\n");
    printf("\t\t\t\t====================================[0. Log Out]====\n");
    printf("\t\t\t\t==                                                ==\n");
    printf("\t\t\t\t==                                                ==\n");
div:
    printf("\t\t\t\t     Reply: ");
    scanf(" %d",&i);
    if(i==1)
    {
        system("cls");
        userB();
    }
    else if(i==2)
    {
        system("cls");
        view();
    }
    else if(i==3)
    {
        system("cls");
        search();
    }
    else if(i==4)
    {
        system("cls");
        dlt();
    }
    else if(i==5)
    {
        system("cls");
        msgs();
    }
    else if(i==6)
    {
        system("cls");
        editusr();
    }

    else if(i==0)
    {
        system("cls");
        user();
    }
    else
    {
        printf("\n\t\t\t\t==================Invalid Choice!==================\n");
        goto div;
    }
}

void usignin()
{
    Identity UserN,Pass;
    printf("\n\n\n\t\t\t\t==============_________________________=============\n");
    printf("\t\t\t\t=============|LIBRARY MANAGEMENT SYSTEM|============\n");
    printf("\t\t\t\t====================================================\n");
    printf("\t\t\t\t====================================================\n");
    printf("\t\t\t\t====================[USER LOGIN]====================\n");
    printf("\t\t\t\t====================================================\n");
    printf("\t\t\t\t====               press'0'to back              ====\n");
    for(;;)
    {
login:
        printf("\n\t\t\t\t     User Name: ");
        scanf(" %[^\n]",UserN.FName);
        if(strcmp(UserN.FName,"Khan")==0)
        {
pass:
            printf("\t\t\t\t     Password : ");
            scanf(" %s",Pass.FName);
            if(strcmp(Pass.FName,"Book")==0)
            {
                subuser();
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
            user();
        }
        else
        {
            printf("\t\t\t\t=================Invalid User Name!=================\n");
            goto login;
        }
    }

    return;
}

void uvisitors()
{
    int i;
    system("cls");
    printf("\n\n\n\t\t\t\t==============_________________________=============\n");
    printf("\t\t\t\t=============|LIBRARY MANAGEMENT SYSTEM|============\n");
    printf("\t\t\t\t====================================================\n");
    printf("\t\t\t\t====================================================\n");
    printf("\t\t\t\t=========================================[Visitor]==\n");
    printf("\t\t\t\t==============================[Welcome to Library]==\n");
    printf("\t\t\t\t====================================================\n");
    printf("\t\t\t\t==                                                ==\n");
    printf("\t\t\t\t==              1. View all Books                 ==\n");
    printf("\t\t\t\t==              2. Search a Book                  ==\n");
    printf("\t\t\t\t==              5. Share Idea's                   ==\n");
    printf("\t\t\t\t====================================================\n");
    printf("\t\t\t\t=========================================[0. Back]==\n");
    printf("\t\t\t\t==                                                ==\n");
    printf("\t\t\t\t==                                                ==\n");
div:
    printf("\t\t\t\t     Reply: ");
    scanf(" %d",&i);
    if(i==1)
    {
        system("cls");
        view();
    }
    else if(i==2)
    {
        system("cls");
        search();
    }
    else if(i==3)
    {
        system("cls");
        msgs();
    }
    else if(i==0)
    {
        system("cls");
        user();
    }
    else
    {
        printf("\n\t\t\t\t==================Invalid Choice!==================\n");
        goto div;
    }
}

void user()
{
    int i;
    system("cls");
    printf("\n\n\n\t\t\t\t==============_________________________=============\n");
    printf("\t\t\t\t=============|LIBRARY MANAGEMENT SYSTEM|============\n");
    printf("\t\t\t\t====================================================\n");
    printf("\t\t\t\t====================================================\n");
    printf("\t\t\t\t=========================================[User ID]==\n");
    printf("\t\t\t\t==============================[Welcome to Library]==\n");
    printf("\t\t\t\t====================================================\n");
    printf("\t\t\t\t==|                   |=====|                    |==\n");
    printf("\t\t\t\t==| 1. Creat a New ID |=====| 2. Signin          |==\n");
    printf("\t\t\t\t==|                   |=====|                    |==\n");
    printf("\t\t\t\t====================================================\n");
    printf("\t\t\t\t==============|                     |===============\n");
    printf("\t\t\t\t==============|    3. Visitors      |===============\n");
    printf("\t\t\t\t==============|                     |===============\n");
    printf("\t\t\t\t====================================================\n");
    printf("\t\t\t\t=========================================[0. Back]==\n");
    printf("\t\t\t\t==                                                ==\n");
    printf("\t\t\t\t==                                                ==\n");
div:
    printf("\t\t\t\t     Reply: ");
    scanf(" %d",&i);
    if(i==1)
    {
        system("cls");
        creat_uid();
    }
    else if(i==2)
    {
        system("cls");
        usignin();
    }
    else if(i==3)
    {
        system("cls");
        uvisitors();
    }
    else if(i==0)
    {
        system("cls");
        main1();
    }
    else
    {
        printf("\n\t\t\t\t==================Invalid Choice!==================\n");
        goto div;
    }
}









void developer()
{
    Identity updt;
    printf("\n\n\n\t\t\t\t==============_________________________=============\n");
    printf("\t\t\t\t=============|LIBRARY MANAGEMENT SYSTEM|============\n");
    printf("\t\t\t\t====================================================\n");
    printf("\t\t\t\t==================|  Group Name  |==================\n");
    printf("\t\t\t\t==================| [ERROR 404!] |==================\n");
    printf("\t\t\t\t====================================================\n");
    printf("\t\t\t\t==            DESIGN AND DEVELOPED BY:            ==\n");
    printf("\t\t\t\t==                                                ==\n");
    printf("\t\t\t\t==                                                ==\n");
    printf("\t\t\t\t==                                                ==\n");
    printf("\t\t\t\t==    1. Md. Masidul Hasan   [ID: 181-15-1947]    ==\n");
    printf("\t\t\t\t==    2. Hasibur Rahman      [ID: 181-15-1777]    ==\n");
    printf("\t\t\t\t==    3. Abu Abdullah Nisat  [ID: 181-15-1878]    ==\n");
    printf("\t\t\t\t==    4. Rashedul Islam      [ID: 181-15-1879]    ==\n");
    printf("\t\t\t\t==    5. Rumman Ahmed        [ID: 181-15-1800]    ==\n");
    printf("\t\t\t\t==                                                ==\n");
    printf("\t\t\t\t==                                                ==\n");
    printf("\t\t\t\t==                                                ==\n");
    printf("\t\t\t\t==    Purpose of this application is to make      ==\n");
    printf("\t\t\t\t==    library works easy.                         ==\n");
    printf("\t\t\t\t==                                                ==\n");
    printf("\t\t\t\t==                                                ==\n");
    printf("\t\t\t\t==    Verson: 0.07.00                             ==\n");
    printf("\t\t\t\t==                                                ==\n");
    printf("\t\t\t\t==  ============================================  ==\n");
    printf("\t\t\t\t==  ==============================|[0].Back  |==  ==\n");
    printf("\t\t\t\t==  ===================== ========|[1].Update|==  ==\n");
    printf("\t\t\t\t==  =================         ==================  ==\n");
    printf("\t\t\t\t==  ============                   =============  ==\n");
    printf("\t\t\t\t==  =======                              =======  ==\n");
up:
    printf("\t\t\t\t\t    Reply: ");
    scanf(" %s",&updt.FName);
    if(strcmp(updt.FName,"1")==0)
    {
        system("cls");
        int i,j,k=1,t;
        char ch='.';
        for(i=0; i<50; i++)
        {
            printf("\n\n\n\t\t\t\t  Wait a while. The application is UPDATING");
            for(j=0; j<k; j++)
            {
                printf("%c",ch);
            }
            for(t=0; t<90000000; t++);
            system("cls");
            k++;
            if(k>=7)
                k=1;
        }
        printf("\n\n\n\t\t\t\t\t    [UPDATED SUCCESSFULLY]\n");
        for(t=0; t<900000000; t++);
        system("cls");
        main1();
    }
    else
    {
        system("cls");
        main1();
    }
    return;
}








void fback()
{

}





void main1()
{
    int i;
    printf("\n\n\n\n\t\t\t|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("\t\t\t|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("\t\t\t||||||================|~~~~~~~~~~~~~~~~~~~~~~~~~~~|================||||||\n");
    printf("\t\t\t|||||   ||============| LIBRARY MANAGEMENT SYSTEM |============||   |||||\n");
    printf("\t\t\t||||    ||============|~~~~~~~~~~~~~~~~~~~~~~~~~~~|============||    ||||\n");
    printf("\t\t\t|||     ||=====================================================||     |||\n");
    printf("\t\t\t||      ||======================MAIN MENU======================||      ||\n");
    printf("\t\t\t|       ||====|                                           |====||       |\n");
    printf("\t\t\t\t||====|     1.Admin                   2.User      |====||\n");
    printf("\t\t\t\t||====|                                           |====||\n");
    printf("\t\t\t\t||====|     3.Developer               4.Feed      |====||\n");
    printf("\t\t\t\t||====|                                           |====||\n");
    printf("\t\t\t\t||====|                5.Restart App              |====||\n");
    printf("\t\t\t\t||====|                                           |====||\n");
    printf("\t\t\t\t||=======================0.Exit========================||\n");
    printf("\t\t\t\t||=====================================================||\n");
    printf("\t\t\t\t||=====                                           =====||\n");
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
        else if(i==5)
        {
            system("cls");
            printf("\n\n\n\n\t\t\t=======================================================================\n");
            printf("\t\t\t=============================RESTARTING================================\n");
            printf("\t\t\t=======================================================================\n\n\n\n\n\n");
            int j;
            printf("\n\n\t\t\t[");
            for(i=0; i<70; i++)
            {
                printf("#");
                for(j=0; j<5555555; j++);
            }
            printf("]");
            system("clsl");
            main();
        }
        else if(i==0)
        {
            system("cls");
            printf("\n\n\n\n\t\t\t========================('.')==GOOD BYE==('.')=========================\n");
            printf("\t\t\t=============================From Library==============================\n\n\n\n\n\n");
            int j;
            printf("\n\n\t\t\t[");
            for(i=0; i<70; i++)
            {
                printf("#");
                for(j=0; j<55555555; j++);
            }
            printf("]");
            for(j=0; j<99999999; j++);
            for(j=0; j<99999999; j++);
            for(j=0; j<99999999; j++);
            exit(1);
        }
        else
        {
            printf("\n\t\t\t\t==================Invalid Choice!==================\n");
            goto div;
        }
    }
}

int main()
{
    int i;
    printf("\n\n\n\n\t\t\t|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("\t\t\t||||||||||||||||||                                     ||||||||||||||||||\n");
    printf("\t\t\t||||||||||||||||||  LIFE IS NOTHING WITHOUT KNOWLEDGE  ||||||||||||||||||\n");
    printf("\t\t\t||||||||||||||||||                                     ||||||||||||||||||\n");
    printf("\t\t\t|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("\t\t\t|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("\t\t\t|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("\t\t\t|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("\t\t\t||.....................................................................||\n");
    printf("\t\t\t||..[].......()..[][][]....[][][]........[]......[][][]....[]......[]..||\n");
    printf("\t\t\t||..[].......[]..[]....[]..[]....[].....[][].....[]....[]...[]....[]...||\n");
    printf("\t\t\t||..[].......[]..[]....[]..[]....[]....[]..[]....[]....[]....[]..[]....||\n");
    printf("\t\t\t||..[].......[]..[][][]....[][][].....[]....[]...[][][].......[][].....||\n");
    printf("\t\t\t||..[].......[]..[][][]....[]..[]....[][][][][]..[]..[]........[]......||\n");
    printf("\t\t\t||..[].......[]..[]....[]..[]...[]...[]......[]..[]...[].......[]......||\n");
    printf("\t\t\t||..[].......[]..[]....[]..[]....[]..[]......[]..[]....[]......[]......||\n");
    printf("\t\t\t||..[][][][..[]..[][][]....[]....[]..[]......[]..[]....[]......[]......||\n");
    printf("\t\t\t||.....................................................................||\n");
    printf("\t\t\t!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
    printf("\t\t\t|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("\t\t\t|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("\t\t\t|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("\t\t\t[");
    int j;
    for(i=0; i<71; i++)
    {
        printf("#");
        for(j=0; j<22222222; j++);
    }
    printf("]");
    for(j=0; j<99999999; j++);
    system("cls");
    main1();

    return 0;
}

