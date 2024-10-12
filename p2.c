#include <stdio.h>
int main()
{
    int x,y;

    printf("Enter the co-ordinates : ");
    scanf("%d %d", &x , &y);

    if(x > 0 && y > 0)
    {
        printf("the point lies in first quadrant");
    }
    else if(x < 0 && y > 0)
    {
        printf("the point lies in second quadrant");
    }
    else if(x < 0 && y < 0)
    {
        printf("the point lies in third quadrant");
    }
    else if(x > 0 && y < 0)
    {
        printf("the point lies in fourth quadrant");
    }
    else if(x == 0 && y == 0)
    {
        printf("the point lies in origin");
    }

    return 0;
}