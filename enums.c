#include <stdio.h>

enum Day{Sunday = 7, Monday = 1, Tuesday = 2, Wednesday = 3, Thursday = 4, Friday = 5, Saturday = 6};

int main()
{
    enum Day today = Monday;
    if(today == Sunday || today == Saturday)
    {
        printf("It's weekend CHEERS!!");
    }
    else
    {
        printf("I have to go to college :(");
    }
    return 0;
}