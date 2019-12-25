#include<stdio.h>
struct Student
{
    char name;
    int id;
    struct Student *next;
};
main()
{
    struct Student n1, n2;
    struct Student *p;


    scanf("%s %d", &n1.name, &n1.id);
    scanf("%s %d", &n2.name, &n2.id);

    n1.next = &n2;
    n2.next = NULL;

    p = &n1;
    while(p != NULL)
    {
        printf("Name: %s \n ID: %d\n", p->name, p->id);

        p = p->next;
    }
}
