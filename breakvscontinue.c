#include <stdio.h>
int main(){
    for(int i = 1; i <= 20; i++)
    {
        if(i == 13)
        {
            //continue; skips the particular
            //break; stops after 13
        }
        printf("%d\n", i);
    }
return 0;
}