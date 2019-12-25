#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *root = NULL;

void append(int value)
{
    struct node *temp, *p;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = value;
    temp->next = NULL;

    if(root == NULL)
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
    printf("\n");
}

void at_any_position()
{
    struct node *temp, *p;
    int position, i;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter positon for insertation : ");
    scanf("%d", &position);
    printf("\nEnter value for insertation : ");
    scanf("%d", &temp->data);
    p = root;

    for(i=1; i<=position-2; i++)
    {
        p = p->next;
    }
    temp->next = p->next;
    p->next = temp;
}

int main()
{
    append(100);
    append(200);
    append(300);
    append(400);
    append(500);

    display();

    at_any_position();

    printf("\nAfter inserted value : ");
    display();

    return 0;
}
