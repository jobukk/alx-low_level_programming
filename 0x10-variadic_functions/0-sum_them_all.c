#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all parameters.
 * @n: type unsigned int
 * Return: the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int y;
	va_list valist;


	if (n == 0)
		return (0);

	va_start(valist, n);

	sum = y = 0;
	while (y < n)
	{
		sum = sum + va_arg(valist, int);
		y++;
	}
	va_end(valist);
	return (sum);
}
