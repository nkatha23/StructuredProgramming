#include <stdio.h>
#include "function.h"

// Function to populate the array with grocery items
void populateArray(GroceryItem items[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Enter details for grocery item %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", items[i].name);
        printf("Price: ");
        scanf("%f", &items[i].price);
        printf("Quantity: ");
        scanf("%d", &items[i].quantity);
    }
}

// Function to print the array of grocery items
void printArray(GroceryItem items[], int size)
{
    printf("Grocery items in the array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("Item %d - Name: %s, Price: %.2f, Quantity: %d\n", i + 1, items[i].name, items[i].price, items[i].quantity);
    }
}
