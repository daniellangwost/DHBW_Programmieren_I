#include <stdio.h>
#include <ctype.h>

int main()
{
    char character;

    printf("Please enter any ASCII character: ");
    scanf("%c", &character);

    // is numeric
    if (isdigit(character)) 
        printf("Numeric!\n");

    // is upper case
    if (isupper(character)) 
        printf("Uppercase!\n");

    // is lower case
    if (islower(character)) 
        printf("Lowercase!\n");
        
    // is alpha
    if (isalpha(character)) 
        printf("Alpha!\n");

    // is alpha numeric
    if (isalnum(character))
        printf("Alphanum!\n");

    // to upper case
    printf("Upper: %c\n", toupper(character));
    
    // to lower case
    printf("Lower: %c\n", tolower(character));
    return 0;
}