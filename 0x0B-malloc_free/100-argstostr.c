#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concat arguments
 * @ac: argt count.
 * @av: argt vector.
 * Return: pointer of an array of char
 */
char *argstostr(int ac, char **av)
{
	char *argt;
	int c, i, j, ia;

	if (ac == 0)
		return (NULL);

	for (c = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			c++;
		c++;
	}

	argt = malloc((c + 1) * sizeof(char));

	if (argt == NULL)
	{
		free(argt);
		return (NULL);
	}

	for (i = j = ia = 0; ia < c; j++, ia++)
	{
		if (av[i][j] == '\0')
		{
			argt[ia] = '\n';
			i++;
			ia++;
			j = 0;
		}
		if (ia < c - 1)
			argt[ia] = av[i][j];
	}
	argt[ia] = '\0';

	return (argt);
}
