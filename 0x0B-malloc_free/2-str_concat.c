#include "main.h"
#include <string.h>
#include <stdlib.h>
/*
 *str_concat - concatenates two strings
 *@s1 - string one
 *@s2 - string two
 *return result
 *
 */

char *str_concat(char *s1, char *s2)
{
int size1, size2, total;
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

char *result;
result = malloc(total);
if (result == NULL)
{
return (NULL);
}
strcat(result, s1);
strcat(result, s2);
return (result);

}
