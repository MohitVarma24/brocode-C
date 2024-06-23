#include <stdio.h>

int main()
{
    FILE *pF = fopen("C:\\Users\\Dell\\Desktop\\porsche.txt", "r");
    char buffer[500];

    if(pF == NULL)
    {
        printf("Unable to open the file!!\n");
    }
    else
    {
        while(fgets(buffer, 255, pF) != NULL)
        {
            printf("%s", buffer);
        }
    }
    return 0;
}