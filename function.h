#ifndef FUNCTION_H
#define FUNCTION_H

// Define the structure for storing grocery items
typedef struct
{
    char name[50];
    float price;
    int quantity;
} GroceryItem;

// Function prototypes
void populateArray(GroceryItem items[], int size);
void printArray(GroceryItem items[], int size);

#endif /* FUNCTION_H */
