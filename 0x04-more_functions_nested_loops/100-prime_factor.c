#include <stdio.h>
#include <math.h>

/**
* main - largest number
* Return: always 0
*/

int main(void)
{
	long l, ml;
	long nbr = 612852475143;
	double square = sqrt(nbr);

	for (l = 1; l <= square; l++)
	{
		if (nbr % l == 0)
		{
			ml = nbr / l;
		}
	}
	printf("%ld\n", ml);

	return (0);
}
