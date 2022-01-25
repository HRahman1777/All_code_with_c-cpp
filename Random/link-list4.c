#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
int head;
int main()
{
    int n;
    insert();
    display();
    return 0;
}

void insert()
{
    struct node*temp=(struct node*)malloc(sizeof(struct node));
    scanf("%d", &temp -> data);
    temp -> next = NULL;
    if(head == NULL)
    {
        head = temp;
        return;
    }
    int n;
    scanf("%d", &n);
    if(n == 1)
    {
        temp -> next = head;
        head = temp;
        return;
    }
    int i;
    struct node*temp1 = head;
    for(i=1; i<n-1; i++)
    {
        temp1 = temp1->next;
    }
    temp->next = temp1->next;
    temp1->next = temp;
}

void display()
{
    struct node *p = head;
    while(p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}
