#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - get ends of input and add together for the size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
int size1, size2, total;
char *result;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
size1 = strlen(s1);
size2 = strlen(s2);
total = size1 + size2;

result = malloc(total + 1);
if (result == NULL)
{
return (NULL);
}
strcat(result, s1);
strcat(result, s2);
return (result);

}
