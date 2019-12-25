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
}

void searching(int valueTosearch)
{
    struct node *temp;
    int flag = 0;
    temp = root;

    while(temp != NULL)
    {
        if(temp->data == valueTosearch)
        {
            flag = 1;
        }
        temp = temp->next;
    }

    if(flag == 1)
    {
        printf("Present\n");
    }
    else
    {
        printf("Not present\n");
    }
}

int main()
{
    int n, i, valueTosearch;
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        append();
    }
    display();
    scanf("%d", &valueTosearch);
    searching(valueTosearch);

    return 0;
}
