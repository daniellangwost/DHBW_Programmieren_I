#include <stdio.h>

int main()
{
    // definitions and declarations
    float z1, z2, z3;
    float x = -2;
    float y = -3;

    // computations
    z1 = x*x + y*y - (x*y) + 2;
    z2 = (x-y) * (x-y) * (x-y) - 3;
    z3 = (2*(x*x*x) - 0.5*(x*x) - x + 4) / y;

    // output
    printf("z1: %f\n", z1);
    printf("z2: %f\n", z2);
    printf("z3: %f\n", z3);
    
    return 0;
}






















