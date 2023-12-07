#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_strings - function that print strings, then a new line
 * @n:  unsigned int, number of str passed to a function
 * @separator: type char pointer string to be printed between numbers
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	char *separatorstr;
	int y;

	if (n < 1)
	{
		printf("\n");
		return;
	}
	va_start(valist, n);
	y = 0;

	while (y < (int) n)
	{
		separatorstr = va_arg(valist, char *);
		if (separatorstr != NULL)
			printf("%s", separatorstr);
		else
			printf("(nil)");
		if (separator != NULL && y != (int) n - 1)
			printf("%s", separator);
		y++;
	}
	printf("\n");
	va_end(valist);
}
