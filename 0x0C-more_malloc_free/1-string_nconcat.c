#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
*string_nconcat - Concatenates two strings using at
*most an inputted number of bytes.
*@s1: The first string.
*@s2: The second string.
*@n: The maximum number of bytes of s2 to concatenate to s1.
*
*Return: If the function fails - NULL.
*Otherwise - a pointer to the concatenated space in memory.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int length1, length2, total_length;
length1 = strlen(s1);
length2 = strlen(s2);
total_length = length1 + ((n < length2) ? n : length2);

char *sentence = (char *)malloc((total_length + 1) * sizeof(char));
if (sentence == NULL)
{
	return (NULL);
}
strcpy(sentence, s1);
strncat(sentence, s2, (n < length2) ? n : length2);
return (sentence);

}
