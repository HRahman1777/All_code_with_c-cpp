#include<stdio.h>

struct student
{
    char name[20];
    int id;
    float cgpa;
};
int main( )
{
    int i;
    struct student student[3];

    for(i=0; i<3; i++)
    {
        printf("Enter %d record\n",i+1);
        printf("Enter Name: ");
        scanf("%s",student[i].name);
        printf("Enter ID: ");
        scanf("%d",&student[i].id);
        printf("Enter CGPA: ");
        scanf("%f",&student[i].cgpa);
        printf("\n");

    }
    printf("\tRecords are....\n");
    printf("\n\tName\tID\tCGPA\t\n");
    for(i=0; i<3; i++)
        printf("\t%s\t%d\t%.2f\t\n", student[i].name, student[i].id, student[i].cgpa);


    int highest = student[0].cgpa;
    int tra = 0;
    for(i=1; i<=3; i++)
    {
        if(student[i].cgpa > highest)
        {
            highest = student[i].cgpa;
            tra = i;
        }
    }
    printf("\n\tHighest CGPA: \n");
    printf("\tName: %s\n\tID: %d\n\tCGPA: %.2f\n", student[tra].name, student[tra].id, student[tra].cgpa);

    return 0;
}
