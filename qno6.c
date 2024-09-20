#include <stdio.h>
int main()
{
    char code;

    printf("Enter the code : ");
    scanf("%c", &code);

    if(code == 'a' || code == 'A')
    {
        printf("You have ordered dosa.");
    }
    else if (code == 'b' || code == 'B')
    {
        printf("You have ordered puri");
    }
    else if (code == 'c' || code == 'C')
    {
        printf("You have ordered biryani");
    }
    else if (code == 'd' || code == 'D')
    {
        printf("You have ordered gulab jamun");
    }
    else
    {
        printf("Please enter a valid code");
    }

    return 0;
}