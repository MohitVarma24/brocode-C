#include <stdio.h>
int main(){
    char grade;

    printf("Enter your grade: ");
    scanf("%c", &grade);

    switch(grade){
        case 'A' :
        printf("OUTSTANDING");
        break;
        case 'B' :
        printf("YOU DID GOOD");
        break;
        case 'C':
        printf("GOOD");
        break;
        case 'D':
        printf("Atleat its not a F");
        break;
        case 'F':
        printf("YOU FAILED!!");
        break;
        return 0;
    }
}