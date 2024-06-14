#include <stdio.h>
int main(){
    int rows;
    int columns;
    int symbol;

    printf("Enter the number of rows : ");
    scanf("%d", &rows);

    printf("Enter the number of columns : ");
    scanf("%d", &columns);

    printf("Enter the symbol : ");
    scanf("%c", &symbol);

    scanf("%c");

    for(int i = 1; i <= rows; i++)
    {
        for(int j = 1; j <= columns; j++)
        {
            printf("%c", symbol);
        }
        printf("\n");
    }
    return 0;
}