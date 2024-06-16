#include <stdio.h>
#include <string.h>

int main()
{
    char x[20] = "Sparkling Water";
    char y[20] = "Water";
    char temp[20];

    strcpy(temp, x);
    strcpy(x, y);
    strcpy(y, temp);

    printf("X = %s\n",x );
    printf("Y = %s\n",y );
    return 0;
}