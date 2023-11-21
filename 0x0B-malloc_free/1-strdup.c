#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - duplicates to new memory space locations
 * @str: char
 * Return: 0 always
 */

char *_strdup(char *str)
{
char *c;
if (str == NULL)
{
return (NULL);
}
c = malloc(strlen(str) + 1);
if (c == NULL)
{
return (NULL);
}
strcpy(c, str);
return (c);


}
