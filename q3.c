#include <stdio.h>
int main()
{
    int side, area, perimeter;

    printf("Enter the value for side : ");
    scanf("%d", &side);

    area = side * side;
    perimeter = 4 * side;
    printf("area of the square = %d", area);
    printf("\nperimeter of the square = %d", perimeter);
    return 0;
}