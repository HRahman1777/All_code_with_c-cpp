#include <stdio.h>

struct Player
{
    char Name[100];
    int Age;
    char Country[20];
    int Rank;
};

int main()
{
    int i,n, flag;
    printf("Enter The Number Of Players: ");
    scanf("%d", &n);
    struct Player playerObj[n];
    for(i=0; i<n; i++)
    {
        printf("\Player %d\n",i+1);

        printf("Enter Name: ");
        scanf("%s",playerObj[i].Name);

        printf("Enter Age: ");
        scanf("%d", &playerObj[i].Age);

        printf("Enter Country Name: ");
        scanf("%s",playerObj[i].Country);

        printf("Enter Rank: ");
        scanf("%d", &playerObj[i].Rank);

    }

    char targetName[100];

    printf("Enter A Player's Name: ");
    scanf("%s",targetName);

    for(i=0; i<n; i++)
    {
        if( strcmp(playerObj[i].Name, targetName) == 0)
        {
            flag=i;
            break;
        }
        else
            flag=-1;
    }

    if(flag == -1)
        printf("\n not found\n");
    else
    {
        printf("\nPlayer %s is found\n",playerObj[flag].Name);
        printf("Age : %d\n", playerObj[flag].Age);
        printf("Country : %s\n", playerObj[flag].Country);
        printf("Rank : %d\n", playerObj[flag].Rank);
    }

    return 0;
}
