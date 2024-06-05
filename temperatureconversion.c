#include <stdio.h>
int main(){
    char unit;
    float temp;

    printf("Is the temperature in (F) or (C)?: ");
    scanf("%c", &unit);

    if (unit == 'C'){
        printf("Enter the temperature in celsius: ");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("The temperature in farenheit is: %.1f", temp);
    }
    else if (unit == 'F'){
        printf("Enter the temperature in farenheit: ");
        scanf("%f", &temp);
        temp = ((temp - 32) * 5) / 9;
        printf("The temperature in celsius is: %.1f", temp);
    }

    return 0;
}