#include <stdio.h>
#include <ctype.h>

int main()
{
    char character;

    printf("Please enter any ASCII character: ");
    scanf("%c", &character);

    if (isalnum(character))
        printf("Alphanumeric!\n");
    else if (isalpha(character))
        printf("Alpha!\n");
    else if (isdigit(character))
        printf("Numeric!");

    // is upper case
    if (isupper(character)) 
    {
        printf("Uppercase!\n");
        printf("Lower: %c\n", tolower(character));
    }

    // is lower case
    if (islower(character)) 
    {
        printf("Lowercase!\n");
        printf("Upper: %c\n", toupper(character));
    }
    return 0;
}