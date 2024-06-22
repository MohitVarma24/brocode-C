#include <stdio.h>

int main()
{
    FILE *pF = fopen("text.txt", "a");
    fprintf(pF, "Spongebob Squarepants");

    fclose(pF);
    return 0;
}