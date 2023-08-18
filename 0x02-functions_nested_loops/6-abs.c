#include "main.h"
/**
 * _abs - absolute value of integer type
 *
 * @n: takes integer type
 *
 *Return: always 0
 */
int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
