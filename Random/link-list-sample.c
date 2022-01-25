#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct stud
{
    int roll;
    char name[20];
    int age;
    struct stud *next;
};

int main()
{
    struct stud *n1 = (struct stud *)malloc(sizeof(struct stud));
    n1 -> roll = 1;
    strcpy(n1 -> name, "Habibur");
    n1 -> age = 18;

    struct stud *n2 = (struct stud *)malloc(sizeof(struct stud));
    n2 -> roll = 2;
    strcpy(n2 -> name, "Habibur");
    n2 -> age = 18;

    struct stud *n3 = (struct stud *)malloc(sizeof(struct stud));
    n3 -> roll = 3;
    strcpy(n3 -> name, "Habibur");
    n3 -> age = 18;

    n1 -> next = n2;
    n2 -> next = n3;
    n3 -> next = NULL;
    struct stud *p = n1;

    while(p != NULL)
    {
        printf("%d %s %d\n", p -> roll, p -> name, p -> age);
        p = p -> next;

    }

    return 0;
}
