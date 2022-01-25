#include<stdio.h>
int main()
{

    int x, y, current_coordinate, target_coordinate;

    printf("Enter value of x: ");
    scanf("%d",&x);

    printf("Enter value of y: ");
    scanf("%d",&y);

    printf("Enter current coordinate : ");
    scanf("%d",&current_coordinate);

    printf("Enter target coordinate : ");
    scanf("%d",&target_coordinate);


    switch(target_coordinate)
    {
    case 1:
        if(x<0)x=x*-1;
        if(y<0)y=y*-1;

        printf("New value of x and y in the target coordinate is: (%d,%d)\n",x,y);
        break;

    case 2:
        if(x>0)x=x*-1;
        if(y<0)y=y*-1;

        printf("New value of x and y in the target coordinate is: (%d,%d)\n",x,y);
        break;

    case 3:
        if(x>0)x=x*-1;
        if(y>0)y=y*-1;

        printf("New value of x and y in the target coordinate is: (%d,%d)\n",x,y);
        break;

    case 4:
        if(x<0)x=x*-1;
        if(y>0)y=y*-1;

        printf("New value of x and y in the target coordinate is: (%d,%d)\n",x,y);
        break;

    default:
        printf("Empty\n");

    }

    return 0;
}
