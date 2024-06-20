#include <stdio.h>

int main()
{
    int x = 6;
    int y = 12;
    int z = 0;

    z = x & y;
    printf("AND = %d\n", z);

    z = x | y;
    printf("OR = %d\n", z);

    z = x ^ y;
    printf("XOR = %d\n", z);
    return 0;
}