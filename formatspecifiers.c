#include <stdio.h>
int main (){
    //format specifier %- defines and formats a type of data to be displayed
    
    // %c = character
    // %s = string (array of characters)
    // %f = float
    // %lf = double float
    // %d = int

    // %.1.. = decimal precision
    // %1 = max field width
    // %- = left allign
    float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 12.25;
    printf("item 1 = %f\n", item1);
    printf("item 2 = %f\n", item2);
    printf("item 3 = %f\n", item3);
    return 0;
}