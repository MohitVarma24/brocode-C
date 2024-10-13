#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Enter the numbers");
    scanf("%d %d", &num1, &num2);

    int sum,product,sub,div;
    sum = num1 + num2;
    product = num1 * num2;
    sub = num1 - num2;
    div = num1 / num2;
    switch (num1, num2){

    case '+':
        printf("%d",sum);
        break;
    
    case '*':
        printf("%d",product);
        break;
    case '-':
        printf("%d",sub);
        break;
    case '/':
        printf("%d",div);
        break;
    default:
        break;
    }
}