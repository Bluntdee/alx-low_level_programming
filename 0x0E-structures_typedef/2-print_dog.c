#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @i: dog's structure
 *
 */

void print_dog(struct dog *i)
{
	if (i)
	{
		if (!(i->name))
		{
			printf("Name: (nil)\n");
		}
		else
		{
			printf("Name: %s\n", i->name);
		}
		printf("Age: %f\n", i->age);
		if (!(i->owner))
		{
			printf("Owner: (nil)\n");
		}
		else
		{
			printf("Owner: %s\n", i->owner);
		}
	}
}
