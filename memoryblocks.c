#include <stdio.h>

int main()
{
    int a = 5;
    int b = 9;
    int c = 2;

    printf("%d BYTES\n", sizeof(a));
    printf("%d BYTES\n", sizeof(b));
    printf("%d BYTES\n", sizeof(c));

    printf("%p\n", &a);
    printf("%p\n", &b);
    printf("%p\n", &c);

    return 0;
}