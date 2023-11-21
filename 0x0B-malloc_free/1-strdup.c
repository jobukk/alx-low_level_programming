#include <stdlib.h>
#include <string.h>
#include "main.h"
/*
*_strdup - return pointer to a new string
*@str: char
*Return: c
*
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
