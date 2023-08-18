#include "main.h"

/**
 * _isdigit - check if c is uppercase
 *
 * @c: Alphabet
 *
 * Return: 1 if it is uppercase, else 0
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
