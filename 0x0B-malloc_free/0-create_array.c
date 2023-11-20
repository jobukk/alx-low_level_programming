#include <stdlib>
#include "main.h"
/**
*create_array - function prototype it takes size and char
*@size: size of the array
*@c: char to be assigned
*Description: creates array and assign char c
*Return: pointer to array, NULL if fail
*/
char *create_array(unsigned int size, char c)
{
char *str;
unsigned int i;
str = malloc(sizeof(char) * size);
if (size == 0 || str == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
str[i] = c;
}
return (str);

}
