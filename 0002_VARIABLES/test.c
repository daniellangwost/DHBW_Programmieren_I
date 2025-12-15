#include <stdio.h>
#include <stdbool.h>

#define MY_PI 3.1415926

int main() 
{
    // declaration and definition
    int aValue = true;
    int bValue = 2;
    const float cValueConst = 42.42;
    unsigned int dValue = 4u;


    // computation

    // outputs
    printf("\thello, world\n");
    printf("This is my first integer value: %d\n", aValue);
    printf("This is my first integer value: %f\n", cValueConst);
    printf("This is my pi: %f\n\n", MY_PI);
    printf("This is funny, because it is %s.\n", aValue ? "true" : "false"); // PRÜFUNGSRELEVANT

    return 0;
}