#include "main.h"
/**
 * print_last_digit - print last digit of a number
 *
 * @n: takes number input
 *
 *Return: last digit of a number
 */
int print_last_digit(int n)
{
	int nbr;

	if (n < 0)
		nbr = (-1) * (n % 10);
	else
		nbr = n % 10;
	_putchar(nbr + '0');
	return (nbr);
}
