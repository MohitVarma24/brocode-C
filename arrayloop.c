#include <stdio.h>
int main(){
    double prices[] = {5, 10, 15, 20, 25, 1, 2, 2};
    //printf("%d bytes", sizeof(prices));
    for(int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++)
    {
        printf("$%.2lf\n", prices[i]);
    }
    return 0;
}