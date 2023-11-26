#include "main.h"


void *_calloc(unsigned int nmemb, unsigned int size)
{
if (nmemb == 0 || size == 0)
	return (NULL);
size_t total_size = nmemb * size;
void *ptr = malloc(total_size);

if (ptr == NULL)
	return (NULL);

memset(ptr, 0, total_size);

return (ptr);
}
