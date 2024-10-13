#include <stdio.h>
int main(){
    int num1, num2, sum, product;

    printf("Enter the values ");
    scanf("%d %d", &num1, &num2);

    sum = num1+num1;
    product = num1*num2;

    if(num1 == num2)
    {
        printf("they are equal\n");
        printf("sum of the numbers is %d", sum);
    }
    else
    {
        printf("they are not equal\n");
        printf("product of the numbers is %d", product);
    }
    return 0;
}




















