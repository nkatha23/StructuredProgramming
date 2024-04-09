#include <stdio.h>
#include <stdlib.h> // Include stdlib.h for malloc and free
#include "function.h"

int main()
{
    int numItems;

    printf("Enter the number of grocery items: ");
    scanf("%d", &numItems);

    // Declare an array of grocery items dynamically
    GroceryItem *groceryItems = malloc(numItems * sizeof(GroceryItem));
    if (groceryItems == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Populate the array
    populateArray(groceryItems, numItems);

    // Print the array
    printArray(groceryItems, numItems);

    // Free dynamically allocated memory
    free(groceryItems);

    return 0;
}
