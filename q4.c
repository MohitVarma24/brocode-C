#include <stdio.h>
int main()
{
    int length, breadth, area, perimeter;

    printf("Enter Length : ");
    scanf("%d", &length);

    printf("Enter Breadth : ");
    scanf("%d", &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("the area of the rectangle = %d", area);
    printf("\nthe perimeter of the rectangle = %d", perimeter);

    return 0;
}