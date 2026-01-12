#include <stdio.h>
#include <stdlib.h>

int main()
{
    size_t length = 3;
    size_t memoryReq = length * sizeof(int);

    printf("adress of length: %p\n", (void*)&length);

    printf("sizeof(int): %zu\n", sizeof(int));
    printf("memoryReq: %zu\n", memoryReq);

    int* heapArray = malloc(memoryReq);

    for (size_t i = 0; i < length; i++)
    {
        heapArray[i] = (int)i * 100;
    }

    for (size_t i = 0; i < length; i++)
    {
        printf("heapArray[%zu]: %d\n", i, heapArray[i]);
        printf("address of heapArray[%zu]: %p\n", i, (void*)&heapArray[i]);
    }

    free(heapArray);
    heapArray = NULL; // = (void*)0
    return 0;
}