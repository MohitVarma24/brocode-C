#include <stdio.h>
#include <math.h>
int main(){
    int A;
    int B;
    int C;

    printf("ENTER A: ");
    scanf("%d", &A);
    printf("ENTER B: ");
    scanf("%d", &B);
    C = sqrt(A*A + B*B);
    printf("HYPOTENUSE IS %d", C);
    return 0;
}