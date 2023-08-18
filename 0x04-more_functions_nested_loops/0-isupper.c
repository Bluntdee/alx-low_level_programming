#include "main.h"

/**
 * _isupper - check if c is uppercase
 *
 * @c: Alphabet
 *
 * Return: 1 if it is uppercase, else 0
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
