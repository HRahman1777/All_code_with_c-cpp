#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
int sentivalue=-1;
int count = 0;

struct node
{
    int num;
    int *ptr;

};

void main()
{

    typedef struct node NODE;

    NODE *head, *first, *temp = 0;

    int choice = 1;
    first = 0;

    while (choice)
    {
        head  = (NODE *)malloc(sizeof(NODE));
        printf("memory we get = %d \n\n",head);
        printf("\nEnter a data element to insert into the Linked List ");
        scanf(" %d", &head-> num);
        if (first != 0)
        {
            temp->ptr = head;
            temp = head;
        }
        else
        {
            first = temp = head;
        }
        fflush(stdin);
        printf("\nDo you want to continue(Type 0 to exit or any integer to continue)? ");
        scanf("%d", &choice);

    }
    temp->ptr = 0;


   head  = (NODE *)malloc(sizeof(NODE));
    head-> num=sentivalue;
    head-> ptr=first;
    temp->ptr = head;


    head  = (NODE *)malloc(sizeof(NODE));
    printf("memory we get = %d \n\n",head);
    printf("\n insert new data into the first position in circular Linked List ");
    scanf("%d", &head-> num);




    while (temp->num= -1)
    {
        printf("[%d]   [%d]",temp,temp->num);
        count++;
        temp =temp->ptr ;



    }
    printf("[600] ");

}
