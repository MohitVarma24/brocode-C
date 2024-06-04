#include <stdio.h>
int main(){
    int radius;
    int circumference;
    int area;
    printf("Enter the radius of the circle:");
    scanf("%d", &radius);
    circumference = 2 * 3.14 * radius;
    printf("The radius of the circle is: %d", circumference);
    return 0;
}