#include <stdio.h>
int main(){
    int age;
    printf("Enter your age.");
    scanf("%d", &age);

    if (age >=18){
        printf("You are now signed up!");
    }
    else if (age ==0){
        printf("Enter a valid age");
    }
    else {
        printf("You are not old enough!");
    }

    return 0;
}