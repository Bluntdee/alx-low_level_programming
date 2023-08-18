#include "main.h"
/**
 * print_number - integer
 *
 * @n: interger
*/
void print_number(int n)
{
	unsigned int nbr = n;

	if (n < 0)
	{
		n *= -1;
		nbr = n;
		_putchar('-');
	}
	nbr /= 10;
	if (nbr != 0)
		print_number(nbr);

	_putchar((unsigned int) n % 10 + 48);
}
