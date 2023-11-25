#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc -  allocates memory for an array, using malloc
 * @nmemb: type unsigned int
 * @size: type unsigned int size of elements
 * Return: NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *b = NULL;
	char *c;
	unsigned int a;

	if (nmemb <= 0 || size <= 0)
		return (b);

	b = malloc(nmemb * size);
	if (b == 0)
		return (NULL);
	c = (char *)b;
	for (a = 0; a < (nmemb * size); a++)
		*(c + a) = 0;

	return (c);
}
