#include "main.h"
#include <stdlib.h>

/**
* *malloc_checked - a character to allocate malloc
* @b: size of buffer
* Return: point to buffer
*
*/
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
