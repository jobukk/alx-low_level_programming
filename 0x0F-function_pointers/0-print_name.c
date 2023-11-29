#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name -func that  prints a name
 * @name: char string pointer
 * @f: Type pointer function & char is an argurment
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		exit(EXIT_FAILURE);
	f(name);
}
