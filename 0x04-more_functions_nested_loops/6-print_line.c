#include "main.h"

/**
 * print_line - print line
 *
 *
 * @n: number of time the _ character should be printed
 *
*/

void print_line(int n)
{
	int l;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (l = 1; l <= n; l++)
			_putchar('_');
		_putchar('\n');
	}
}
