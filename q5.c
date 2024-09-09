#include <stdio.h>
int main(){

    int base, height, area;

    printf("Enter base : ");
    scanf("%d", &base);

    printf("Enter height : ");
    scanf("%d", &height);

    area = (base * height) / 2;

    printf("Area of the triangle = %d", area);

    return 0;
}