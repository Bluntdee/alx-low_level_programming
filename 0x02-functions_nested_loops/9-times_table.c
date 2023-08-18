#include "main.h"
/**
 * times_table - print table 9 times
 *
 *
 */
void times_table(void)
{
	int n1, n2, tbl;

	for (n1 = 0; n1 <= 9; n1++)
	{
		_putchar(48);
		for (n2 = 1; n2 <= 9; n2++)
		{
			_putchar(',');
			_putchar(' ');
			tbl = n1 * n2;
			if (tbl <= 9)
				_putchar(' ');
			else
				_putchar((tbl / 10) + 48);
			_putchar((tbl % 10) + 48);
		}
		_putchar('\n');
	}
}
