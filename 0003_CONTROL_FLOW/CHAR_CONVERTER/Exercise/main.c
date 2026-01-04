#include <stdio.h>
#include <ctype.h>

int main()
{
    // definitions and declarations
    char character;

    // input
    printf("Please enter any ASCII character: ");
    scanf("%c", &character);

    // output and processing

    if (!isalnum(character))
    {
        printf("Not an alphanumeric character, quitting...\n");
        return 0;
    }

    if (isalpha(character))
    {
        printf("Alphabetic character!\n");
        if (isupper(character))
        {
            printf("Case: Uppercase\n");
            printf("Lower: %c\n", tolower(character));
        }
        else
        {
            printf("Case: Lowercase\n");
            printf("Upper: %c\n", toupper(character));
        }
    }
    else
        printf("Numeric character!\n");
    return 0;
}