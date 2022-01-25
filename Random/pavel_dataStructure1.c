#include <stdio.h>

struct Student
{
    char Name[100];
    int ID;
    float CGPA;
};

int main()
{
    struct Student studentObj[3];
    int i,n=3, flag;
    float temp=0;
    for(i=0; i<n; i++)
    {
        printf("\aStudent %d\n",i+1);

        printf("Enter Name: ");
        scanf("%s",studentObj[i].Name);

        printf("Enter ID.: ");
        scanf("%d", &studentObj[i].ID);

        printf("Enter CGPA: ");
        scanf("%f", &studentObj[i].CGPA);

        if(i==0)
        {
            temp=studentObj[i].CGPA;
            flag=i;
        }
        else
        {
            if(studentObj[i].CGPA<temp)
            {
                temp=studentObj[i].CGPA;
                flag=i;
            }
        }
    }

    printf("\nStudent %d\n",flag+1);

    printf("Name : %s\n", studentObj[flag].Name);
    printf("ID : %d\n", studentObj[flag].ID);
    printf("CGPA : %.2f\n", studentObj[flag].CGPA);

    return 0;
}
