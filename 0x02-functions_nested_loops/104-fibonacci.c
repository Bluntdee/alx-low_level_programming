#include "main.h"
/**
 * * numbFunc - length of string
 * *
 * * @nbr: number
 * * Return: number
 * *
 */
int numbFunc(int nbr)
{
	int l = 0;

	if (!nbr)
		return (1);
	while (nbr)
	{
		nbr = nbr / 10;
		l += 1;
	}
	return (l);
}
/**
 * * main - Entry point
 * *
 * * Description: Fibonacci numbers
 * * Return: always 0
 *
 */
int main(void)
{
	int count, i;
	unsigned long f = 1, f1 = 2, sum, mx = 100000000, f2 = 0, f3 = 0, sum1 = 0;

	for (count = 1; count <= 98; count++)
	{
		if (f2 > 0)
			printf("%lu", f2);
		i = numbFunc(mx) - 1 - numbFunc(f);
		while (f2 > 0 && i > 0)
		{
			printf("%d", 0);
			i--;
		}
		printf("%lu", f);
		sum = (f + f1) % mx;
		sum1 = f2 + f3 + (f + f1) / mx;
		f = f1;
		f2 = f3;
		f1 = sum;
		f3 = sum1;
		if (count != 98)
			printf(", ");
		else
			printf("\n");
	}

	return (0);
}
