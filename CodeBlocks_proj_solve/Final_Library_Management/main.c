#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>



struct contact
{
    char bself[15];
    char catagory[20];
    char bname[20];
    char author[30];

} library;

char query[20],name[20];
FILE *fp, *ft, *msg;
int i,n,ch,l,found;

char Admin_Name[60],A_user_Name[60],Admin_pass[60];
FILE *admin_name;
FILE *save_admin_name;
FILE *save_admin_pass;





void addbk()
{
    system("cls");
    printf("\n\n\n\t\t\t\t==============_________________________=============\n");
    printf("\t\t\t\t=============|LIBRARY MANAGEMENT SYSTEM|============\n");
    printf("\t\t\t\t=====================[ADMIN ID]=====================\n");
    printf("\t\t\t\t====================================================\n");
    admin_name = fopen("admin_name.text","r");
    fscanf(admin_name,"%[^\n]",Admin_Name);
    int spc;
    char space[30];
    for(spc=0; spc<=19-strlen(Admin_Name); spc++)
    {
        space[spc]=' ';
    }
    space[spc]='\0';
    strcat(space,Admin_Name);
    printf("\t\t\t\t============================[%s]==\n",space);
    fclose(admin_name);
    printf("\t\t\t\t====================================================\n");
    printf("\t\t\t\t=======================================[Add Books]==\n");
    printf("\t\t\t\t====================================================\n");
    fp=fopen("contact.dll","a");
    for (;;)
    {
        fflush(stdin);
        printf("\t\t\t\tEnter Catagory: ");
        scanf("%[^\n]",&library.catagory);
        if(strcmp(library.catagory," ")==0)
            subadmin();
        fflush(stdin);
        printf("\t\t\t\t");
        printf("  Book Self No: ");
        scanf("%[^\n]",&library.bself);
        fflush(stdin);
        printf("\t\t\t\t");
        printf("     Book Name: ");
        scanf("%[^\n]",&library.bname);
        fflush(stdin);
        printf("\t\t\t\t");
        printf("        Author: ");
        gets(library.author);
        printf("\n");
        fwrite(&library,sizeof(library),1,fp);
    }
    fclose(fp);
    int i;
    printf("\t\t\t\t\t[DONE!!]");
    for(i=0; i<2222222222; i++);
    subadmin();
}







void vview()
{
    system("cls");
    printf("\n\n\n\t\t\t\t==============_________________________=============\n");
    printf("\t\t\t\t=============|LIBRARY MANAGEMENT SYSTEM|============\n");
    printf("\t\t\t\t=====================[Viewers]======================\n");
    printf("\t\t\t\t====================================================\n");
    printf("\t\t\t\t====================================================\n");
    printf("\t\t\t\t                   LIST OF BOOKS                    \n");
    printf("\t\t\t\t====================================================\n");
    for(i=97; i<=122; i=i+1)
    {

        fp=fopen("contact.dll","r");
        fflush(stdin);
        found=0;
        while(fread(&library,sizeof(library),1,fp)==1)
        {
            if(library.catagory[0]==i || library.catagory[0]==i-32)
            {
                printf("\n\t\t\t\t     Catagory: %s\n\t\t\t\t Book Self No: %s\n\t\t\t\t    Book Name: %s\n\t\t\t\t       Author: %s\n",library.catagory,library.bself,library.bname,library.author);
                found++;
            }
        }
        if(found!=0)
        {
            printf("\t\t\t\t===============================================[%c-%d]\n\n",i-32,found);
        }
        fclose(fp);

    }
    printf("\t\t\t\t");
    getch();
    viewer();

}











void aview()
{
    system("cls");
    printf("\n\n\n\t\t\t\t==============_________________________=============\n");
    printf("\t\t\t\t=============|LIBRARY MANAGEMENT SYSTEM|============\n");
    printf("\t\t\t\t=====================[Admin ID]=====================\n");
    printf("\t\t\t\t====================================================\n");
    admin_name = fopen("admin_name.text","r");
    fscanf(admin_name,"%[^\n]",Admin_Name);
    int spc;
    char space[30];
    for(spc=0; spc<=19-strlen(Admin_Name); spc++)
    {
        space[spc]=' ';
    }
    space[spc]='\0';
    strcat(space,Admin_Name);
    printf("\t\t\t\t============================[%s]==\n",space);
    fclose(admin_name);
    printf("\t\t\t\t====================================================\n");
    printf("\t\t\t\t====================================================\n");
    printf("\t\t\t\t                   LIST OF BOOKS                    \n");
    printf("\t\t\t\t====================================================\n");

    for(i=97; i<=122; i=i+1)
    {

        fp=fopen("contact.dll","r");
        fflush(stdin);
        found=0;
        while(fread(&library,sizeof(library),1,fp)==1)
        {
            if(library.catagory[0]==i || library.catagory[0]==i-32)
            {
                printf("\n\t\t\t\t     Catagory: %s\n\t\t\t\t Book Self No: %s\n\t\t\t\t    Book Name: %s\n\t\t\t\t       Author: %s\n",library.catagory,library.bself,library.bname,library.author);
                found++;
            }
        }
        if(found!=0)
        {
            printf("\t\t\t\t==============================================[%c-%d]\n\n",i-32,found);
        }
        fclose(fp);

    }
    printf("\t\t\t\t");
    getch();
    subadmin();

}











void editbooki()
{
    system("cls");
    printf("\n\n\n\t\t\t\t==============_________________________=============\n");
    printf("\t\t\t\t=============|LIBRARY MANAGEMENT SYSTEM|============\n");
    printf("\t\t\t\t=====================[ADMIN ID]=====================\n");
    printf("\t\t\t\t====================================================\n");
    printf("\t\t\t\t====================================================\n");
    admin_name = fopen("admin_name.text","r");
    fscanf(admin_name,"%[^\n]",Admin_Name);
    int spc;
    char space[30];
    for(spc=0; spc<=19-strlen(Admin_Name); spc++)
    {
        space[spc]=' ';
    }
    space[spc]='\0';
    strcat(space,Admin_Name);
    printf("\t\t\t\t============================[%s]==\n",space);
    fclose(admin_name);
    printf("\t\t\t\t====================================================\n");
    printf("\t\t\t\t=============================[Editing Book Record]==\n");
    fp=fopen("contact.dll","r");
    ft=fopen("temp.dat","w");
    fflush(stdin);
    printf("\t\t\t\tBook Name: ");
    scanf("%[^\n]",name);
    while(fread(&library,sizeof(library),1,fp)==1)
    {
        if(stricmp(name,library.bname)!=0)
            fwrite(&library,sizeof(library),1,ft);
    }
    fflush(stdin);
    printf("\n\t\t\t\tBook Catagory: ");
    scanf("%[^\n]",&library.catagory);
    fflush(stdin);
    printf("\t\t\t\t Book Self No: ");
    scanf("%[^\n]",&library.bself);
    fflush(stdin);
    printf("\t\t\t\t    Book Name: ");
    scanf("%[^\n]",&library.bname);
    fflush(stdin);
    printf("\t\t\t\t       Author: ");
    gets(library.author);
    printf("\n");
    fwrite(&library,sizeof(library),1,ft);
    fclose(fp);
    fclose(ft);
    remove("contact.dll");
    rename("temp.dat","contact.dll");
    printf("\n\n\t\t\t\t\t[Successfully Saved]");
    printf("\t\t\t\t");
    getch();
    subadmin();
}








void dlt()
{
    system("cls");
    printf("\n\n\n\t\t\t\t==============_________________________=============\n");
    printf("\t\t\t\t=============|LIBRARY MANAGEMENT SYSTEM|============\n");
    printf("\t\t\t\t=====================[ADMIN ID]=====================\n");
    printf("\t\t\t\t====================================================\n");
    printf("\t\t\t\t====================================================\n");
    admin_name = fopen("admin_name.text","r");
    fscanf(admin_name,"%[^\n]",Admin_Name);
    int spc;
    char space[30];
    for(spc=0; spc<=19-strlen(Admin_Name); spc++)
    {
        space[spc]=' ';
    }
    space[spc]='\0';
    strcat(space,Admin_Name);
    printf("\t\t\t\t============================[%s]==\n",space);
    fclose(admin_name);
    printf("\t\t\t\t====================================================\n");
    fflush(stdin);
    printf("\t\t\t\tBook Name: ");
    scanf("%[^\n]",&name);
    fp=fopen("contact.dll","r");
    ft=fopen("temp.dat","w");
    while(fread(&library,sizeof(library),1,fp)!=0)
        if (stricmp(name,library.bname)!=0)
            fwrite(&library,sizeof(library),1,ft);
    fclose(fp);
    fclose(ft);
    remove("contact.dll");
    rename("temp.dat","contact.dll");
    printf("\t\t\t\t[[Successfully DELETED!!]]\n");
    printf("\t\t\t\t");
    getch();
    subadmin();
}








void searcha()
{
go:
    system("cls");
    printf("\n\n\n\t\t\t\t==============_________________________=============\n");
    printf("\t\t\t\t=============|LIBRARY MANAGEMENT SYSTEM|============\n");
    printf("\t\t\t\t=====================[ADMIN ID]=====================\n");
    printf("\t\t\t\t====================================================\n");
    printf("\t\t\t\t====================================[Search Books]==\n");
    admin_name = fopen("admin_name.text","r");
    fscanf(admin_name,"%[^\n]",Admin_Name);
    int spc;
    char space[30];
    for(spc=0; spc<=19-strlen(Admin_Name); spc++)
    {
        space[spc]=' ';
    }
    space[spc]='\0';
    strcat(space,Admin_Name);
    printf("\t\t\t\t============================[%s]==\n",space);
    fclose(admin_name);
    printf("\t\t\t\t====================================================\n");
    found=0;
    printf("\n\t\t\t\tBook Name: ");
    fflush(stdin);
    scanf("%[^\n]",&query);
    l=strlen(query);
    fp=fopen("contact.dll","r");
    printf("\n\t\t\t\tSearch result for '%s'\n",query);
    while(fread(&library,sizeof(library),1,fp)==1)
    {
        for(i=0; i<=l; i++)
            name[i]=library.bname[i];
        name[l]='\0';
        if(stricmp(name,query)==0)
        {
            printf("\n\t\t\t\t     Catagory: %s\n\t\t\t\t Book Self No: %s\n\t\t\t\t    Book Name: %s\n\t\t\t\t       Author: %s\n",library.catagory,library.bself,library.bname,library.author);
            found++;
        }
    }

    if(found==0)
        printf("\n\t\t\t\t\t\tNo match found!");
    else
        printf("\t\t\t\t\t\t[[%d match(s) found!]]",found);
    fclose(fp);
    printf("\n\t\t\t\tTry again?\n\t\t\t\t[1] Yes\t[0] No\n\t\t\t\tReply:");
    scanf("%d",&ch);
    if(ch==1)
        goto go;
    else
        subadmin();
}







void searchv()
{
go:
    system("cls");
    printf("\n\n\n\t\t\t\t==============_________________________=============\n");
    printf("\t\t\t\t=============|LIBRARY MANAGEMENT SYSTEM|============\n");
    printf("\t\t\t\t=====================[Viewers]======================\n");
    printf("\t\t\t\t====================================================\n");
    printf("\t\t\t\t====================================================\n");
    printf("\t\t\t\t                   Search a Book                    \n");
    printf("\t\t\t\t====================================================\n");
    found=0;
    printf("\n\t\t\t\tBook Name: ");
    fflush(stdin);
    scanf("%[^\n]",&query);
    l=strlen(query);
    fp=fopen("contact.dll","r");
    printf("\n\t\t\t\tSearch result for '%s'\n",query);
    while(fread(&library,sizeof(library),1,fp)==1)
    {
        for(i=0; i<=l; i++)
            name[i]=library.bname[i];
        name[l]='\0';
        if(stricmp(name,query)==0)
        {
            printf("\n\t\t\t\t     Catagory: %s\n\t\t\t\t Book Self No: %s\n\t\t\t\t    Book Name: %s\n\t\t\t\t       Author: %s\n",library.catagory,library.bself,library.bname,library.author);
            found++;
        }
    }

    if(found==0)
        printf("\n\t\t\t\t\t\tNo match found!");
    else
        printf("\t\t\t\t\t\t[[%d match(s) found!]]",found);
    fclose(fp);
    printf("\n\t\t\t\tTry again?\n\t\t\t\t\t[1] Yes\t[0] No\n\t\t\t\tReply:");
    scanf("%d",&ch);
    if(ch==1)
        goto go;
    else
        viewer();
}







void editadmn()
{
    int i;
    char faka;
    system("cls");
    printf("\n\n\n\t\t\t\t==============_________________________=============\n");
    printf("\t\t\t\t=============|LIBRARY MANAGEMENT SYSTEM|============\n");
    printf("\t\t\t\t=====================[ADMIN ID]=====================\n");
    printf("\t\t\t\t====================================================\n");
    printf("\t\t\t\t====================================================\n");
    admin_name = fopen("admin_name.text","r");
    fscanf(admin_name,"%[^\n]",Admin_Name);
    int spc;
    char space[30];
    for(spc=0; spc<=19-strlen(Admin_Name); spc++)
    {
        space[spc]=' ';
    }
    space[spc]='\0';
    strcat(space,Admin_Name);
    printf("\t\t\t\t============================[%s]==\n",space);
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
msgone:
    system("cls");
    printf("\n\n\n\t\t\t\t==============_________________________=============\n");
    printf("\t\t\t\t=============|LIBRARY MANAGEMENT SYSTEM|============\n");
    printf("\t\t\t\t======================[ADMIN ID]====================\n");
    printf("\t\t\t\t====================================================\n");
    admin_name = fopen("admin_name.text","r");
    fscanf(admin_name,"%[^\n]",Admin_Name);
    int spc;
    char space[30];
    for(spc=0; spc<=19-strlen(Admin_Name); spc++)
    {
        space[spc]=' ';
    }
    space[spc]='\0';
    strcat(space,Admin_Name);
    printf("\t\t\t\t============================[%s]==\n",space);
    fclose(admin_name);
    printf("\t\t\t\t====================================================\n");
    printf("\t\t\t\t==                                                ==\n");
    printf("\t\t\t\t==              1. Add a Book Information         ==\n");
    printf("\t\t\t\t==              2. View all Books                 ==\n");
    printf("\t\t\t\t==              3. Edit a Book Record             ==\n");
    printf("\t\t\t\t==              4. Delete a Book record           ==\n");
    printf("\t\t\t\t==              5. Search a Book                  ==\n");
    printf("\t\t\t\t==              6. Viewer Messages                ==\n");
    printf("\t\t\t\t==              7. Edit User Id                   ==\n");
    printf("\t\t\t\t====================================================\n");
    printf("\t\t\t\t======================================[0. Log Out]==\n");
    printf("\t\t\t\t==                                                ==\n");
    printf("\t\t\t\t==                                                ==\n");
div:
    printf("\t\t\t\t     Reply: ");
    scanf(" %d",&i);
    switch(i)
    {
    case 1:
    {
        system("cls");
        addbk();
    }
    break;
    case 2:
    {
        system("cls");
        aview();
    }
    break;
    case 3:
    {
        system("cls");
        editbooki();
    }
    break;
    case 4:
    {
        system("cls");
        dlt();
    }
    break;
    case 5:
    {
        system("cls");
        searcha();
    }
    break;
    case 6:
    {
        system("cls");
        char faka;
        scanf("%c",&faka);
        printf("\n\n\n");
        printf("\t\t\t\t==============_________________________=============\n");
        printf("\t\t\t\t=============|LIBRARY MANAGEMENT SYSTEM|============\n");
        printf("\t\t\t\t=====================[ADMIN ID]=====================\n");
        printf("\t\t\t\t====================================================\n");
        printf("\t\t\t\t====================================================\n");
        admin_name = fopen("admin_name.text","r");
        fscanf(admin_name,"%[^\n]",Admin_Name);
        int spc;
        char space[30];
        for(spc=0; spc<=19-strlen(Admin_Name); spc++)
        {
            space[spc]=' ';
        }
        space[spc]='\0';
        strcat(space,Admin_Name);
        printf("\t\t\t\t============================[%s]==\n",space);
        fclose(admin_name);
        printf("\t\t\t\t====================================================\n");
        printf("\t\t\t\t==                                                ==\n");
        char mssg[2000];
        msg=fopen("msg.text","r");
        fscanf(msg,"%[^\n]%",mssg);
        fclose(msg);
        int l, msgln=27;
        printf("\t\t\t\tMessage from Viewers: ");
        for(l=0; l<=strlen(mssg); l++)
        {
            printf("%c",mssg[l]);
            if(mssg[l]==' ')
            {
                if(l>msgln)
                {
                    printf("\n\t\t\t\t                      ");
                    msgln+=30;
                    continue;
                }
            }
            else
                continue;
        }
        getch();
        goto msgone;
    }
    break;
    case 7:
    {
        system("cls");
        editadmn();
    }
    break;

    case 0:
    {
        system("cls");
        main1();
    }
    break;
    default :
    {
        printf("\n\t\t\t\t==================Invalid Choice!==================\n");
        goto div;
    }
    break;
    }
}






void admin()
{
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
        scanf(" %[^\n]",Admin_Name);
        save_admin_name=fopen("admin_user_name.text","r");
        fscanf(save_admin_name,"%s",A_user_Name);
        fclose(save_admin_name);
        if(strcmp(Admin_Name,A_user_Name)!=0)
        {
pass:
            printf("\t\t\t\t     Password : ");
            save_admin_pass = fopen("save_admin_pass.text","r");
            fscanf(save_admin_pass,"%s",Admin_pass);
            fclose(save_admin_pass);
            char pass[40];
            scanf(" %[^\n]",pass);
            if(strcmp(Admin_pass,pass)!=0)
            {
                subadmin();
            }
            else
            {
                printf("\t\t\t\t=================Invalid Password!=================\n\n");
                goto pass;
            }
        }
        else if(strcmp(Admin_Name,"0")==0)
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







void msgs()
{
    char foul;
    scanf("%c",&foul);
    system("cls");
    printf("\n\n\n\t\t\t\t==============_________________________=============\n");
    printf("\t\t\t\t=============|LIBRARY MANAGEMENT SYSTEM|============\n");
    printf("\t\t\t\t=====================[Viewers]======================\n");
    printf("\t\t\t\t====================================================\n");
    printf("\t\t\t\t====================================================\n");
    printf("\t\t\t\t                  Write a Message                   \n");
    printf("\t\t\t\t====================================================\n");
    printf("\t\t\t\tTo Admin: ");
    char mssg[200];
    gets(mssg);
    msg=fopen("msg.text","w");
    fprintf(msg,"%s",mssg);
    fclose(msg);
    system("cls");
    int i,j,k=1,t;
    char ch='.';
    for(i=0; i<15; i++)
    {
        printf("\n\n\n\n\n\n\n\t\t\t\t\t\t  SENDING");
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
    printf("\n\n\n\n\n\n\n\t\t\t\t\t\t    [SENT]\n");
    printf("\t\t\t\t");
    for(t=0; t<900000000; t++);
    system("cls");
    viewer();


}







void viewer()
{
    int i;
    system("cls");
    printf("\n\n\n\t\t\t\t==============_________________________=============\n");
    printf("\t\t\t\t=============|LIBRARY MANAGEMENT SYSTEM|============\n");
    printf("\t\t\t\t================[Welcome to Library]================\n");
    printf("\t\t\t\t=====================[VIEWERS]======================\n");
    printf("\t\t\t\t====================================================\n");
    printf("\t\t\t\t====================================================\n");
    printf("\t\t\t\t==|                                              |==\n");
    printf("\t\t\t\t==|             1. View all Books                |==\n");
    printf("\t\t\t\t==|             2. Search a Book                 |==\n");
    printf("\t\t\t\t==|             3. Share Idea's With Admin       |==\n");
    printf("\t\t\t\t====================================================\n");
    printf("\t\t\t\t=========================================[0. Back]==\n");
    printf("\t\t\t\t==                                                ==\n");
    printf("\t\t\t\t==                                                ==\n");
div:
    printf("\t\t\t\t     Reply: ");
    scanf(" %d",&i);
    switch(i)
    {
    case 1:
    {
        system("cls");
        vview();
    }
    break;
    case 2:
    {
        system("cls");
        searchv();
    }
    break;
    case 3:
    {
        system("cls");
        msgs();
    }
    break;
    case 0:
    {
        system("cls");
        main1();
    }
    break;
    default :
    {
        printf("\n\t\t\t\t==================Invalid Choice!==================\n");
        goto div;
    }
    break;
    }
}









void developer()
{
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
    printf("\t\t\t\t==    Verson: 181-15                              ==\n");
    printf("\t\t\t\t==                                                ==\n");
    printf("\t\t\t\t==  ============================================  ==\n");
    printf("\t\t\t\t==  ==============================|[0].Back  |==  ==\n");
    printf("\t\t\t\t==  ===================== ========|[1].Update|==  ==\n");
    printf("\t\t\t\t==  =================         ==================  ==\n");
    printf("\t\t\t\t==  ============                   =============  ==\n");
    printf("\t\t\t\t==  =======                              =======  ==\n");
up:
    printf("\t\t\t\t\t    Reply: ");
    int choice;
    scanf("%d",&choice);
    if(choice==1)
    {
        system("cls");
        int i,j,k=1,t;
        char ch='.';
        for(i=0; i<50; i++)
        {
            printf("\n\n\n\n\n\n\t\t\t\t  Wait a while. The application is UPDATING");
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
        printf("\n\n\n\n\n\n\t\t\t\t\t\t    [UPDATED SUCCESSFULLY]\n");
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






void main1()
{
    int in;
    printf("\n\n\n\n\t\t\t|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("\t\t\t|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("\t\t\t||||||================|~~~~~~~~~~~~~~~~~~~~~~~~~~~|================||||||\n");
    printf("\t\t\t|||||   ||============| LIBRARY MANAGEMENT SYSTEM |============||   |||||\n");
    printf("\t\t\t||||    ||============|~~~~~~~~~~~~~~~~~~~~~~~~~~~|============||    ||||\n");
    printf("\t\t\t|||     ||=====================================================||     |||\n");
    printf("\t\t\t||      ||======================MAIN MENU======================||      ||\n");
    printf("\t\t\t|       ||====|                                           |====||       |\n");
    printf("\t\t\t\t||====|     1.Admin                   2.Viewer    |====||\n");
    printf("\t\t\t\t||====|                                           |====||\n");
    printf("\t\t\t\t||====|     3.Developers              4.Feed      |====||\n");
    printf("\t\t\t\t||====|                                 Back      |====||\n");
    printf("\t\t\t\t||====|                5.Restart App              |====||\n");
    printf("\t\t\t\t||====|                                           |====||\n");
    printf("\t\t\t\t||=======================0.Exit========================||\n");
    printf("\t\t\t\t||=====================================================||\n");
    printf("\t\t\t\t||=====                                           =====||\n");
    for(;;)
    {
div:
        printf("\t\t\t\t     Reply: ");
        scanf("%d",&in);
        switch(in)
        {
        case 1:
        {
            system("cls");
            admin();
        }
        break;
        case 2:
        {
            system("cls");
            viewer();
        }
        break;
        case 3:
        {
            system("cls");
            developer();
        }
        break;
        case 4:
        {
            system("cls");
            msgs();
        }
        break;
        case 5:
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
            system("cls");
            main();
        }
        break;
        case 0:
        {
            system("cls");
            printf("\n\n\n\n");
            printf("\t\t\t========================('.')==GOOD BYE==('.')=========================\n");
            printf("\t\t\t=======================================================================\n");
            printf("\t\t\t==========================|  From Library  |===========================\n");
            printf("\t\t\t                                                                       \n");
            printf("\t\t\t          [][][]       [][]      [][]     []    []     [][]            \n");
            printf("\t\t\t          []    []   []    []  []    []   []  []     []    []          \n");
            printf("\t\t\t          []    []   []    []  []    []   [][]        []               \n");
            printf("\t\t\t          [][][]     []    []  []    []   [][]          []             \n");
            printf("\t\t\t          []    []   []    []  []    []   []  []     []   []           \n");
            printf("\t\t\t          [][][]       [][]      [][]     []    []    [][]             \n");
            printf("\t\t\t                                                                       \n");
            printf("\t\t\t                          /======================.                     \n");
            printf("\t\t\t                         /                       .                     \n");
            printf("\t\t\t                        /                        .                     \n");
            printf("\t\t\t                       /                         .                     \n");
            printf("\t\t\t                      /                          .                     \n");
            printf("\t\t\t                     /                           .                     \n");
            printf("\t\t\t                    /                            .                     \n");
            printf("\t\t\t                   /                             .                     \n");
            printf("\t\t\t                  /                              .                     \n");
            printf("\t\t\t                 (================================                     \n");
            printf("\t\t\t                 (-------------------------------.                     \n");
            printf("\t\t\t                 (-------------------------------.                     \n");
            printf("\t\t\t                 (================================                     \n");
            printf("\t\t\t                                                                       \n");
            printf("\t\t\t                                                                       \n");
            int j;
            printf("\n\n\t\t\t[");
            for(i=0; i<70; i++)
            {
                printf("#");
                for(j=0; j<11111111; j++);
            }
            printf("]");
            for(j=0; j<444444444; j++);
            exit(1);
        }
        break;
        default :
        {
            printf("\n\t\t\t\t==================Invalid Choice!==================\n");
        }
        break;
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

