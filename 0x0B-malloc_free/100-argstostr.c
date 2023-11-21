#include"main.h"
#include<stdlib.h>
#include<string.h>

/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
int i, n;
char *result;
size_t total_length = 0;

if (ac <= 0 || av == NULL)
return (NULL);



for (i = 0; i < ac; i++)
{
if (av[i] == NULL)
{
return (NULL);
}
total_length += strlen(av[i]) + i;
}

result = malloc(total_length + 1);
if (result == NULL)
return (NULL);

size_t current_position = 0;

for (n = 0; n < ac; n++)
{
strcpy(result + current_position, av[n]);

current_position += strlen(av[n]);

result[current_position] = '\n';

current_position++;
}

result[current_position] = '\0';
return (result);

}
