#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;

void at_any_position()
{
    struct node *temp, *p;
    int i;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = 70;
    temp->next = NULL;

    p = head;

    for(i= 1; i<= 3 - 2; i++)
    {
        p = p->next;
    }
    temp->next = p->next;
    p->next = temp;
}

void display()
{
    struct node *temp;
        temp = head;

        while(temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");

}

void main()
{
    struct node *n1, *n2, *n3, *n4, *n5;
    n1 = (struct node *)malloc(sizeof(struct node));
    n2 = (struct node *)malloc(sizeof(struct node));
    n3 = (struct node *)malloc(sizeof(struct node));
    n4 = (struct node *)malloc(sizeof(struct node));
    n1->data = 10;
    n1->next = n2;
    n2->data = 20;
    n2->next = n3;
    n3->data = 30;
    n3->next = n4;
    n4->data = 40;
    head = n1;
    int value, position;
    at_any_position();
    display();

}
