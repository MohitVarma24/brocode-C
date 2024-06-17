#include <stdio.h>
#include <string.h>

struct player
{
    char name[20];
    int score;
};

int main()
{
    struct player player1;
    struct player player2;

    strcpy(player1.name, "Mohit");
    player1.score = 2;

    strcpy(player2.name, "Bhuvan");
    player2.score = 4;

    printf("%s ", player1.name);
    printf(" - %d ", player1.score);

    printf("\n%s ", player2.name);
    printf("- %d ", player2.score);
    return 0;
}