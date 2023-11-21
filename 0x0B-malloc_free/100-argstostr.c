#include "main.h"
#include <stdlib.h>

char *argstostr(int ac, char **av)
{
    int size, i, n;
    size_t total_length =0;
   
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
    
    char *result = (char *)malloc(total_length + 1);
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
    return result;
    
}
