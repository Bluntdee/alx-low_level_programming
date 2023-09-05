#include <stdlib.h>
#include "main.h"

/**
 * count_word - function counting the number of words in a string
 * @s: input string
 *
 * Return: word count
 */
int count_word(char *s)
{
	int flg, i, j;

	flg = 0;
	j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			flg = 0;
		else if (flg == 0)
		{
			flg = 1;
			j++;
		}
	}

	return (w);
}
/**
 * **strtow - Function spliting a string into words
 * @str: input string to split
 *
 * Return: pointer to string array
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, j = 0, length = 0, words, k = 0, start, end;

	while (*(str + length))
		length++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (k)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (k + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[j] = tmp - k;
				j++;
				k = 0;
			}
		}
		else if (k++ == 0)
			start = i;
	}

	matrix[j] = NULL;

	return (matrix);
}
