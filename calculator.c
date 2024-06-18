#include <stdio.h>
int main(){
    char operator;
    double num1;
    double num2;
    double result;

    printf("Enter an operator (+ - * /)");
    scanf("%c", &operator);

    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    switch (operator){
        case '-':
        result = num1 - num2;
        printf("Result: %lf", result);
        break;
        case '+':
        result = num1 + num2;
        printf("Result: %lf", result);
        break;
        case '*':
        result = num1 * num2;
        printf("Result: %lf", result);
        break;
        case '/':
        result = num1 / num2;
        printf("Result: %lf", result);
        break;
    }    
    return 0;
}