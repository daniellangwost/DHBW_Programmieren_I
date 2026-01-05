#include <stdio.h>

// Call by Reference function
void printMemoryAddressAndValue(float* value)
{
    printf("Memory Adress: \t%p\n", value);
    printf("Value: \t\t%f\n", *value);
}
// Call by Value function
float addValue(float value1, float value2)
{
    return value1 + value2;
}

int main()
{
    float myFloat = 42.42f;

    printMemoryAddressAndValue(&myFloat);

    float userInput = 0.0f;
    printf("Enter a value (float) to add: ");
    scanf("%f",&userInput);

    float newValue = addValue(myFloat, userInput);
    printMemoryAddressAndValue(&newValue);

    return 0;
}