#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - func to search an integer
 * @array: int array pointer
 * @size:  pointer size of the array
 * @cmp: Type pointer to the function compare that values
 * Return: return -1 if size <=0 or elem no matches -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int y;

	if (array == NULL || cmp == NULL || size < 1)
		return (-1);

	for (y = 0; y < size; y++)
	{
		if (cmp(*(array + y)))
			return (y);
	}
	return (-1);
}
