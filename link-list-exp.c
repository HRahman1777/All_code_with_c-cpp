#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct node *next;
};

struct Node *head;

int main()
{
    int n;
    printf("\nHOW MANY DATA YOU WANT TO SAVE ?\n");
    scanf("%d",&n);
    add(n);
    printf("\n\n THE LINK LIST IS:\n\n\n");
    display();
    printf("\n");

    return 0;
}

void add(int n)
{
    int i;
    struct Node * tmp1;
    struct Node * p;

    for(i=1; i<=n; i++)
    {
        tmp1 = (struct Node*)malloc(sizeof(struct Node));
        printf("\nEnter value of node no %d---", i);
        scanf("%d",&(tmp1->data));
        tmp1->next = NULL;
        if(head == NULL)
            head = tmp1;
        else
        {
            p = head;
            while(p->next != NULL)
                p = p->next;
            p->next=tmp1;
        }
    }
}

void display()
{
    struct Node *p=head;

        p=head;
        while(p!=NULL)
        {
            printf("\n%d->",p->data);
            p=p->next;
        }
}
