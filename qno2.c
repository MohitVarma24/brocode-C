#include <stdio.h>
int main()
{
    int a, b, add, sub, product;
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);

    add = a + b;
    sub = a - b;
    product = a * b;

    printf("The sum of a & b is : %d", add);
    printf("\nThe sub of a & b is : %d", sub);
    printf("\nThe product of a & b is : %d", product);

return 0;
}