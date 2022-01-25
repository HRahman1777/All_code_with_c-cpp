#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head;

void insert()
{
    struct node*temp=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter Item value\n");
    scanf("%d",&temp->data);
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
        return;
    }
    printf("\n Which position you want to add\n");
    int n;
    scanf("%d",&n);
    if(n==1)
    {
        temp->next=head;
        head=temp;
        return;
    }
    int i;
    struct node*temp1=head;
    for(i=1; i<n-1; i++)
    {
        temp1=temp1->next;
    }
    temp->next=temp1->next;
    temp1->next=temp;
}
void display()
{
    struct node*p=head;
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}
void search()
{
    struct node*p=head;
    int a;
    printf("Which value you want to check\n");
    scanf("%d",&a);
    while(p!=NULL)
    {
        if(p->data==a)
        {
            printf("FOUND\n");
            return;
        }
        p=p->next;
    }
    printf("Not Found\n");

}
void delet()
{
    printf("\nWhich position you want to delete\n\n");
    struct node* temp1=head;
    int x;
    scanf("%d",&x);
    if(x==1)
    {
        temp1->next=head;
        head=temp1;
        return;
    }
    int i;
    for(i=1; i<x-1; i++)
        temp1=temp1->next;
    struct node* temp2=temp1->next;
    temp1->next=temp2->next;
}
void nodeCount()
{
    int c=0;
    struct node* p=head;
    while(p!=NULL)
    {
        c++;
        p=p->next;
    }
    printf("\n\nTotal Node in Linklist is:%d",c);
}
void update()
{
    struct node *p=head;
    int x,y;
    printf("\nWhich value you want to replace\n\n");
    scanf("%d",&x);
    printf("\nWhat is you new value\n");
    scanf("%d",&y);
    while(p!=NULL)
    {
        if(p->data==x)
        {
            p->data=y;
            return;
        }
        p=p->next;
    }
}

int main()
{
    insert();
    display();
    /*while(1)
    {
        int op;
        scanf("%d",&op);
        switch(op)
        {
        case 1:
            insert();
            break;
        case 2:
            display();
            break;
        case 3:
            search();
            break;
        case 4:
            delet();
            break;
        case 5:
            nodeCount();
            break;
        case 6:
            update();
            break;
        default:
            return;
        }
    }*/
    return 0;
}
