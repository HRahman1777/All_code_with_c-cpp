#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

struct student
{
    int roll;
    char name[10];
    int marks;
};
int main()
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
    int nm;
    printf("Roll | Name       | Marks\n");
    printf("-------------------------\n");
    for(j=0; j<n; j++)
    {
         nm = sizeof(s[j].name);
cout<<nm<<endl;
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


    return 0;
}
