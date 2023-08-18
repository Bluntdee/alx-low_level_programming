#include "main.h"
/**
 * main - Entry point
 *
 * Description: Fibonacci numbers
 * Return: always 0
 *
 */
int main(void)
{
	float s;
	unsigned long f = 0, f1 = 1, sum;

	while (1)
	{
		sum = f + f1;
		if (sum > 4000000)
			break;
		if ((sum % 2) == 0)
			s += sum;
		f = f1;
		f1 = sum;
	}
	printf("%.0f\n", s);

	return (0);
}
