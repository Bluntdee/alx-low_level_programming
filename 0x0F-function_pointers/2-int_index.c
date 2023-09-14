#include "function_pointers.h"
/**
 * int_index - Finds index based on comparison, or returns -1 if not found
 * @array: Array to search
 * @size: Number of elements in the array
 * @cmp: Pointer to a comparison function
 * Return: Index or -1 if not found
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array == NULL || size <= 0 || cmp == NULL)
return (-1);
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
return (-1);
}
