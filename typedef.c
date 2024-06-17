#include <stdio.h>

typedef struct 
{
    char name[30];
    char passwoard[30];
    int id;
}user;

int main()
{
    user user1 = {"Rocky", "qwerty", 123456789};
    user user2 = {"Bhai", "wdfgytr", 531357975};

    printf("%s \n", user1.name);
    printf("%s \n", user1.passwoard);
    printf("%d \n", user1.id);

    printf("\n%s \n", user2.name);
    printf("%s \n", user2.passwoard);
    printf("%d \n", user2.id);
    return 0;
}