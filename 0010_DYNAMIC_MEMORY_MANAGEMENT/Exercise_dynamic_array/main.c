#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int n = 0;
    int sum = 0;
    do
    {
        printf("Enter the number of elements: ");
        scanf("%d", &n);
        if (n <= 0) printf("Invalid input! The number of elements must be greater than zero.\n");
    } while (n <= 0);

    int* array = malloc((size_t)n * sizeof(int));
    if (!array)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &array[i]);
        sum += array[i];
    }
    printf("The sum of the array elements is: %d\n", sum);
    
    free(array);
    array = NULL;
    return 0;
}
