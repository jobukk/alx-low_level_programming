#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *malloc_checked -pointer to allocated memory
 *@b: size  of memory
 *Return: void
 */

void *malloc_checked(unsigned int b)
{
void *a;

a = malloc(b);
if (a == NULL)
{
exit(98);
}

return (a);
}
