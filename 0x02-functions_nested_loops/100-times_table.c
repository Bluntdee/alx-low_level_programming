#include "main.h"
/**
 * print_times_table - print table n times
 *
 * @n: number input
 *
 */
void print_times_table(int n)
{
	int n1, n2, tbl;

	if (n <= 15 && n >= 0)
	{
		for (n1 = 0; n1 <= n; n1++)
		{
			_putchar(48);
			for (n2 = 1; n2 <= n; n2++)
			{
				_putchar(',');
				_putchar(' ');
				tbl = n1 * n2;
				if (tbl <= 9)
					_putchar(' ');
				if (tbl <= 99)
					_putchar(' ');
				if (tbl >= 100)
				{
					_putchar((tbl / 100) + 48);
					_putchar((tbl / 10) % 10 + 48);
				}
				else if (tbl <= 99 && tbl >= 10)
					_putchar((tbl / 10) + 48);
				_putchar((tbl % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
