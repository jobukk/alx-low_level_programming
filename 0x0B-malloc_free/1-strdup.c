#include <stdlib.h>
#include "main.h"
/*
* _strdup - duplicates to new memory space locations
*@c: char
*Return: c
*
*/

char *_strdup(char *str)
{
char *c;
c = malloc(strlen(str) + 1);
if (str == NULL)
{
return (NULL);
}
strcpy(c, str);
if (c == NULL)
return (NULL);
return (c);

free(c);
}
