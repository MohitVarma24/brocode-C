#include <stdio.h>
int main(){

    int num1, x;

    printf("Enter the a number : ");
    scanf("%d", &num1);

    x = num1 % 2;

    if (num1 > 0)
    {
        printf("The no. is positive \n");
        if(x == 0)
        printf("this is even number");
        if(x != 0)
        printf("this is odd number");
    }
    else{
        printf("this is a negative no.");
    }
    return 0;
}