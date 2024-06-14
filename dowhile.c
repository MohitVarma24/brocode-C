#include <stdio.h>
int main(){
    int number = 0;
    int sum = 0;
    do{
        printf("enter a number greater than 0 : ");
        scanf("%d", &number);

        if(number > 0)
        {
            sum += number;
        }
    }while(number > 0);
    printf("Sum is : %d", sum);
return 0;
}