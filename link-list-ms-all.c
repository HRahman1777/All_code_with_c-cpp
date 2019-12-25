#include <stdio.h>
#include <stdlib.h>

struct node
{
    long long int data;
    struct node *next;
}*head;




void head_point();
void Add_More_data();
void Add_a_data_at_a_position();
void Delete_a_data();
void display();
void sml_big();
void big_sml();
void createList();



void main()
{
    int i, n, data;
    struct node *tmp=head, *p=NULL;
    printf("\n\n\n");
    printf("\t\t\t...........CREAT A LINKED LIST............\n\n\n");
    printf("\t\t\t.....HOW MANY DATA YOU WANT TO INSERT.....\n");
    printf("\t\t\t.....                                .....\n");
    printf("\t\t\t     Reply: ");
    scanf("%d", &n);
    printf("\n\t\t\t....Data Entry:\n");
    for(i=0; i<n; i++)
    {
        tmp=(struct node*)malloc(sizeof(struct node));
        printf("\t\t\t....Data%d---> ",i+1);
        scanf("%d",&(tmp->data));
        tmp->next=NULL;
        if(head==NULL)
            head=tmp;
        else
        {
            p=head;
            while(p->next!=NULL)
                p=p->next;
            p->next=tmp;
        }
    }
    system("cls");
    head_point();
}




void head_point()
{
    int n;
point1:
    printf("\n\n\n");
    printf("\t\t\t.WHAT YOU WANT TO DO WITH CREATED LINKDE LIST.\n");
    printf("\t\t\t..............................................\n\n");
    printf("\t\t\t.....(1) Add More data                   .....\n");
    printf("\t\t\t.....(2) Add a data at a position        .....\n");
    printf("\t\t\t.....(3) Delete a data                   .....\n");
    printf("\t\t\t.....(4) Small to Big                    .....\n");
    printf("\t\t\t.....(5) Big to Small                    .....\n");
    printf("\t\t\t.....(6) Swap a data                     .....\n");
    printf("\t\t\t.....(7) Update a data                   .....\n");
    printf("\t\t\t.....(8) Display all data                .....\n\n");
    printf("\t\t\t     Reply: ");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        system("cls");
        struct node *temp;
        temp=head;
        printf("\n\n\n\t\t\t...............ALL DATA...............\n\n");
        int t=1;
        while(temp!=NULL)
        {
            printf("\t\t\tData%d---> %d\n", t, temp->data);
            temp=temp->next;
            t++;
        }
        printf("\n\n\n\t\t\tHOW MANY DATA YOU WANT TO INSERT?\n");
        Add_More_data();
        break;
    case 2:
        system("cls");
        Add_a_data_at_a_position();
        break;
    case 3:
        system("cls");
        Delete_a_data();
        break;
    case 4:
        system("cls");
        break;
    case 5:
        system("cls");
        break;
    case 6:
        system("cls");
        break;
    case 7:
        system("cls");
        break;
    case 8:
        system("cls");
        display();
        break;
    default:
        system("cls");
        printf("\n\n\n\t\t\tSorry You Entered Wrong Entry!!!!\n");
        printf("\t\t\t[Press ENTER to go back]\n\t\t\t");
        getch();
        system("cls");
        goto point1;
    }
}




void Add_More_data()
{
    int i, n;
    struct node *tmp=head, *p=NULL;
    printf("\n\t\t\tReplay: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        tmp=(struct node*)malloc(sizeof(struct node));
        printf("\t\t\tEnter data %d---> ",i);
        scanf("%d",&(tmp->data));
        tmp->next=NULL;
        if(head==NULL)
            head=tmp;
        else
        {
            p=head;
            while(p->next!=NULL)
                p=p->next;
            p->next=tmp;
        }
    }
    system("cls");
    head_point();
}




void Add_a_data_at_a_position()
{
    int n, i, count=0;
    struct node *tmp, *p;
    printf("\n\n\n\t\t\tEnter the position: ");
    scanf("%d",&n);
    p=head;
    while(p!=NULL)
    {
        count++;
        p=p->next;
    }
    if(n<=count)
    {
        tmp=(struct node*)malloc(sizeof(struct node));
        printf("\t\t\tData: ");
        scanf("%d",&tmp->data);
        tmp->next=NULL;
        if(n==1)
        {
            tmp->next=head;
            head=tmp;
        }
        else
        {
            p=head;
            for(i=1; i<n-1; i++)
                p=p->next;
            tmp->next=p->next;
            p->next=tmp;
        }
        printf("\t\t\t\tDONE!!\n\t\t\t");
    }
    else
        printf("\n\t\t\tsorry you have only %d data!!\n\t\t\t",count);
    system("cls");
    head_point();
}



void Delete_a_data()
{
    int data;
    struct node *tmp, *q;
    printf("\n\n\n\t\t\tWhich data you want to delete?\n\t\t\tReply: ");
    scanf("%d",&data);
    printf("\t\t\t");
    tmp=head;
    while(tmp!=NULL)
    {
        if(tmp->data==data)
            break;
        q=tmp;
        tmp=tmp->next;
    }
    getch();
    system("cls");
    head_point();
}



void display()
{
    system("cls");
    int count=0;
    struct node *tmp;
    tmp=head;
    while(tmp!=NULL)
    {
        count++;
        tmp=tmp->next;
    }
    tmp=head;
    printf("\n\n\n\t\t\t..........[%d].ALL DATA.[%d]..........\n\n\n",count,count);
    int t=1;
    while(tmp!=NULL)
    {
        printf("\t\t\tData%3d---> %d\n", t, tmp->data);
        tmp=tmp->next;
        t++;
    }
    printf("\n\t\t\tpress enter to back");
    getch();
    system("cls");
    head_point();
}
