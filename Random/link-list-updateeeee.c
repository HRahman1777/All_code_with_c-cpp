#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *root = NULL;

void append()
{
    struct node *temp, *p;
    temp = (struct node *)malloc(sizeof(struct node));
    scanf("%d", &temp->data);
    temp->next = NULL;

    if(root ==  NULL)
    {
        root = temp;
    }
    else
    {
        p = root;

        while(p->next != NULL)
        {
            p = p->next;
        }
        p->next = temp;
    }
}

void display()
{
    struct node *temp;
    temp = root;

    while(temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

void updatation(int position, int valueTosearch)
{
    struct node *temp;
    int i;
    temp = root;

    for(i=1; i<=position-1; i++)
    {
        temp = temp->next;
    }
    temp->data = valueTosearch;
}


void display_after_updatation()
{
    struct node *temp;
    temp = root;

    while(temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
}

int main()
{
    int n, i, position, valueToupdate;
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        append();
    }
    display();
    scanf("%d %d", &position, &valueToupdate);
    updatation(position, valueToupdate);
    display_after_updatation();

    return 0;
}

