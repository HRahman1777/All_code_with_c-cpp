#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
}node;

node * head;

void add(int n)
{
    int i = 0;
    struct Node * tmp1=head;
    struct Node * p=NULL;

    for(i=0;i<n;i++){
        tmp1=(struct Node*)malloc(sizeof(struct Node));
        printf("\nEnter value of node no %d---",i+1);
        scanf("%d",&(tmp1->data));
        tmp1->next=NULL;
        if(head==NULL)head=tmp1;
        else {
            p=head;
            while(p->next!=NULL)p=p->next;
            p->next=tmp1;
        }
    }
}

void display()
{
    struct Node *p=head;
    if(p==NULL)printf("\nEmpty!!!");
    else {
        p=head;
        while(p!=NULL){
            printf("\n%d->",p->data);
            p=p->next;
        }
    }
}

int main()
{
    int n;
    struct Node *tmp=head;
    printf("\nHOW MANY DATA YOU WANT TO SAVE ?\n");
    scanf("%d",&n);
    add(n);
    printf("\n\n THE LINK LIST IS:\n\n\n");
    display();
    printf("\n");

    return 0;
}
