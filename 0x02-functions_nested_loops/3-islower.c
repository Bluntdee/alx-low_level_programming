#include "main.h"
/**
 * _islower - Checks for lowercase
 *
 *@c: checks input of function
 *
 * Return: returns 1 if 'c' is lowercase otherwise always 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
