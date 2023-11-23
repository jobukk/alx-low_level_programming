#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: type int minimum size
 * @max: type int maximum size
 * Return: NULL if malloc fails or min > max
 */
int *array_range(int min, int max)
{
	int *a;
	int b;

	if (min > max)
		return (NULL);
	a = malloc((max - min + 1) * sizeof(*a));
	if (a == NULL)
		return (NULL);

	for (b = 0; min <= max; b++, min++)
		*(a + b) = min;

	return (a);
}
