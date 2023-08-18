#include "main.h"

/**
 * more_numbers - print 0 to 14
 *
 *
 *
 * Return: always 0
*/

void more_numbers(void)
{
	int i, r, c;

	for (r = 1; r <= 10; r++)
	{
		for (c = 0; c <= 14; c++)
		{
			i = c;
			if (c > 9)
			{
				_putchar(1 + 48);
				i = c % 10;
			}
			_putchar(i + 48);
		}
		_putchar('\n');
	}
}
