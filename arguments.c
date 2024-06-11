#include <stdio.h>
    
void birthday(char name[] , int age)
{
printf("\nHey my name is %s", name);
printf("\nAnd my age is %d", age);
}
int main(){

char name[] = "Mikey";
int age = 19;

    birthday(name ,age);
    return 0; 
}