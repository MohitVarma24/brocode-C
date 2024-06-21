#include <stdio.h>
int main()
{
    int age = 17;
    int *pAge = NULL;
    pAge = &age;

    printf("The address of age : %p\n", &age);
    printf("value of age : %p\n", pAge);

    printf("The value of age : %d\n", age);
    printf("The value stored address : %d\n", *pAge);

    printf("The size of age : %d BYTES\n", sizeof(age));
    printf("The size of pAge : %d BYTES\n", sizeof(pAge));
    return 0;
}