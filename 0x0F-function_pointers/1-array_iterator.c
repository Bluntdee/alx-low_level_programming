#include "function_pointers.h"
#include <stdio.h>

/**
 *array_iterator -Iterates over an array and applies a function to each element
 * @array: The array to iterate over
 * @size: The number of elements in the array
 * @action: A pointer to a function that processes each element
 *
 * Description:
 * This function takes an array, its size, and a pointer to a function. It
 * iterates over each element in the array and applies the provided function
 * to each element. The purpose of this function is to perform a specified
 * action on each element of the array.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (array == NULL || action == NULL)
return;
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
