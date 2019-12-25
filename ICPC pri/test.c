#include<stdio.h>
#include<string.h>
struct student
{
    int roll;
    char name[10];
    int marks;
};
void main()
{
    struct student s[100],temp;
    int i,j,n;
    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%d%s%d",&s[i].roll,s[i].name,&s[i].marks);

    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-1; j++)
        {
            if(s[j].marks<s[j+1].marks)
            {
                temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }
        }
    }
    for(i=0; i<n-1; i++)
    {
        if(s[i].marks == s[i+1].marks)
            if(s[i].roll > s[i+1].roll)
            {
                temp=s[i];
                s[i]=s[i+1];
                s[i+1]=temp;
            }
    }
    //int i;
    printf("Roll | Name       | Marks\n");
    printf("-------------------------\n");
    for(j=0; j<n; j++)
    {
        size_t nm = sizeof(s[j].name);
printf("\n%d\n", nm);
        if(s[j].roll / 10 == 0)
            printf("   %d |", s[j].roll);
        if(s[j].roll / 10 != 0)
            printf("  %d |", s[j].roll);
        printf(" %s", s[j].name);
        for(i = nm; i<= 11; i++)
        {
            printf(" ");
        }
        printf("| %d\n", s[j].marks);
    }


}

/*Roll | Name       | Marks
-------------------------
   1 | kabul      | 100
printf("Roll | Name       | Marks\n");
    printf("-------------------------\n");
    for(j=0; j<n; j++)
        printf("   %d | %s      | %d\n",s[j].roll,s[j].name,s[j].marks);
*/
